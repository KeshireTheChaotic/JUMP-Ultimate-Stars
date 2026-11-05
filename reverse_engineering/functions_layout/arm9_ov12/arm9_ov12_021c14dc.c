
char * FUN_021c14dc(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  *param_2 = *param_1;
  cVar1 = *param_2;
  if (cVar1 == '\a') {
    iVar2 = FUN_021c1408(param_3);
    if (iVar2 != 0) {
      return (char *)(DAT_021d5284 + (param_3 + -1) * 0x20);
    }
    param_2[2] = param_1[1];
    if (DAT_021d528c < (int)(uint)(byte)param_2[2]) {
      return (char *)0x0;
    }
    FUN_02051890(param_1 + 2,param_2 + 3,DAT_021d5288);
    pcVar3 = (char *)FUN_021c1458(param_2,param_3);
  }
  else if (cVar1 == '\b') {
    *(ushort *)(param_2 + 2) = (ushort)(byte)param_1[1];
    pcVar3 = param_1 + 3;
    *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) | (ushort)(byte)param_1[2] << 8;
  }
  else {
    if (cVar1 != '\t') {
      return (char *)0x0;
    }
    *(ushort *)(param_2 + 2) = (ushort)(byte)param_1[1];
    *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) | (ushort)(byte)param_1[2] << 8;
    FUN_02051890(param_1 + 3,param_2 + 4,DAT_021d5288);
    pcVar3 = param_1 + 3 + DAT_021d5288;
  }
  return pcVar3;
}

