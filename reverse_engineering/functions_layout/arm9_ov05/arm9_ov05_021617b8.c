
void FUN_021617b8(int param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = 0;
  puVar4 = *(undefined4 **)(param_1 + 0x1c);
  do {
    pcVar3 = (char *)((int)puVar4 + 0x4e);
    pcVar1 = param_2;
    do {
      param_2 = pcVar1;
      pcVar2 = pcVar3;
      if (*param_2 == '\0') goto LAB_021617f8;
      pcVar2 = pcVar3 + 1;
      *pcVar3 = *param_2;
      pcVar3 = pcVar2;
      pcVar1 = param_2 + 1;
    } while (param_2[1] != '\n');
    param_2 = param_2 + 2;
LAB_021617f8:
    *pcVar2 = '\0';
    func_0x021bd7c0(*puVar4,iVar5,(int)puVar4 + 0x4e);
    iVar5 = iVar5 + 1;
    if (2 < iVar5) {
      return;
    }
  } while( true );
}

