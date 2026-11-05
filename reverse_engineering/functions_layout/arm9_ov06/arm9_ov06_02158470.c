
void FUN_02158470(int param_1,int param_2,int param_3,int param_4,short param_5,char param_6,
                 char *param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint unaff_r6;
  char *pcVar4;
  
  pcVar4 = (char *)(*(int *)(param_2 + 0x10) + param_3 * 0x20);
  if (param_7 != (char *)0x0) {
    unaff_r6 = (uint)*(ushort *)(pcVar4 + 2);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x7c);
  if (param_7 != (char *)0x0 && unaff_r6 != 0) {
    if ((int)unaff_r6 <= (int)*param_7) {
      return;
    }
    *param_7 = *param_7 + '\x01';
  }
  puVar3 = *(undefined4 **)(param_1 + 0x78);
  if (*pcVar4 == '\r') {
    if ((*(int *)(param_1 + 0x84) == 0) &&
       (iVar2 = FUN_0216a944(uVar1,param_2,param_3,param_4 << 8,(int)param_5 << 8,param_7,
                             (int)param_6,*(undefined2 *)(param_1 + 0xa6),
                             *(undefined2 *)(param_1 + 0xa4),0,0), iVar2 != 0)) {
      if (puVar3 != (undefined4 *)0x0) {
        *(undefined4 *)(iVar2 + 0x14) = *puVar3;
      }
      *(int *)(param_1 + 0x84) = iVar2;
    }
  }
  else {
    iVar2 = FUN_0216a944(uVar1,param_2,param_3,param_4 << 8,(int)param_5 << 8,param_7,(int)param_6,
                         *(undefined2 *)(param_1 + 0xa6),*(undefined2 *)(param_1 + 0xa4),0,0);
    if (iVar2 != 0) {
      if (puVar3 != (undefined4 *)0x0) {
        *(undefined4 *)(iVar2 + 0x14) = *puVar3;
      }
      *(int *)(param_1 + 0x80) = iVar2;
    }
  }
  return;
}

