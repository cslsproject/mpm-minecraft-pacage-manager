#include <stdio.h>

int main( )
{	
	FILE *pFile = NULL;

	pFile = fopen( "/etc/newell/mpm/config.nwc", "r" );
	if( pFile == NULL )
	{
		printf("[mpm error]컨피그 파일의 주소가 잘못되었거나 컨피그 파일을 찻을수 없습니다. 임시 해결법 : /etc/newell/mpm/config.nwc 파일에 있는 url을 http://merror.newell.kro.kr 로 바꿔보세요.\n", );
	}
	else
	{
		int nCount;
		float fRatio;
		char strDesc[255];

		while( !feof( pFile ) )
		{
			//공백으로 분리된 파일 읽기
			fscanf( pFile, "%d %f %s\n", &nCount, &fRatio, strDesc );
			printf( "공백으로 분리 : %d %f %s\n", nCount, fRatio, strDesc );
		}

		fclose( pFile );
	}

	return 0;
}
