#include "SyntaticalAnalyzer.h"
//#include"Buffer.h"
using namespace std;
int main(){
	SyntaticalAnalyzer syntatical_analyzer;
	//syntatical_analyzer.lex.bf.BufferPrint();
	//syntatical_analyzer.InitialLookhead(4);
	syntatical_analyzer.InitialLookhead();
	syntatical_analyzer.LexicalAnalyze();
	//Buffer bf;
	//bf.Bufferprint();
	getchar();
}
	