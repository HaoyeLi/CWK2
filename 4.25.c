#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct read_in{
	char linkid[100],node1[100],node2[100],length[100],veg[100],arch[100],land[100],poi[100];
}in[1000010];
struct mp_node{
	int to,next;
}e[1000010];
struct point{
	int id,x,y;
}p[100010];
int head[100010];
int path_cnt=0;
int node_cnt=0;
void add(int u,int v,int len){
	e[++path_cnt].next=head[u];
	e[path_cnt].to=v;
	head[u]=path_cnt;
}
void readin(){
	long long link_cnt=0,node_cnt=0;
//	FILE *fp=fopen(filename,modes:"r");
//	if(fp==NULL){
//		printf(format:"open file error!\n");
//		exit(status:1);
//	}
	
	while(!feof(stream:fp)){
		fscanf(stream:fp,format:"%s",buffer);
		link_cnt++;
		sscanf( s:buffer,
				format:"<link id=%s node=%s node=%s way=%s length=%s veg=%s arch=%s land=%s POI=%s;/link>"
				&in[link_cnt].linkid,&in[link_cnt].node1,&in[link_cnt].node2,&in[link_cnt].way,&in[link_cnt].length,
				&in[link_cnt].veg,&in[link_cnt].arch,&in[link_cnt].land,&in[link_cnt].poi);
		)
		for(int i=1;i<=link_cnt;i++){
			add(in[i].node1,in[i].node2,in[i].length);
			add(in[i].node2,in[i].node1,in[i].length);			
		}
		node_cnt++;
		sscanf( s:buffer,
				format:"<node id=%s lat=%s lon=%s /node>"
				&p[node_cnt].id,&p[node_cnt].x,&p[node_cnt].y;
		)
}