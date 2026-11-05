
void FUN_0214dc3c(int param_1,int param_2,char *param_3,char *param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uStack_28;
  
  bVar1 = false;
  *param_4 = '\0';
  iVar2 = 0;
  *param_3 = '\0';
  uStack_28 = param_4;
  while (iVar2 < (int)(uint)*(byte *)(param_2 + 0x44)) {
    FUN_0214db0c(param_1,*(int *)(param_1 + 0x38) + (uint)*(byte *)(param_2 + iVar2 + 0x38) * 0x40,
                 (int)&uStack_28 + 1,&uStack_28);
    iVar2 = iVar2 + 1;
    *param_3 = *param_3 + uStack_28._1_1_;
    *param_4 = *param_4 + (char)uStack_28;
    if ((char)uStack_28 == -1) {
      bVar1 = true;
    }
  }
  if (bVar1) {
    *param_4 = -1;
  }
  return;
}

