
char * FUN_0215961c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = (char *)(param_1 + 0x10);
  iVar3 = 0;
  while( true ) {
    if (0xb < iVar3) {
      return (char *)0x0;
    }
    if (((*pcVar2 != '\0') && (iVar1 = thunk_FUN_020024cc(pcVar2 + 4,param_3,0x14), iVar1 == 0)) &&
       (iVar1 = thunk_FUN_020024cc(pcVar2 + 0x20,param_2 + 4,6), iVar1 == 0)) break;
    iVar3 = iVar3 + 1;
    pcVar2 = pcVar2 + 0xdc;
  }
  return pcVar2;
}

