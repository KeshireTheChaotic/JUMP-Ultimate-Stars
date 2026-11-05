
void FUN_02158224(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(*(int *)(param_1 + 4) + 0x94) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0214ed84();
  }
  iVar4 = *(int *)(param_1 + 4);
  sVar1 = *(short *)(iVar4 + 0xa2);
  iVar5 = *(int *)(*(int *)(iVar2 + 4) + 0x124);
  iVar3 = *(int *)(iVar4 + 0x50);
  *(int *)(iVar3 + 0xc) = (int)*(short *)(iVar4 + 0xa0) << 0xc;
  iVar2 = (int)sVar1 << 0xc;
  *(int *)(iVar3 + 0x10) = iVar2;
  FUN_02150fb8(iVar3,1,iVar2,iVar4,param_4);
  if (iVar5 == 3) {
    FUN_02023894(*(undefined4 *)(param_1 + 4),0xb0000e,0);
    return;
  }
  if (iVar5 == 4) {
    FUN_02023894(*(undefined4 *)(param_1 + 4),0xb0000f,0);
    return;
  }
  FUN_02023894(*(undefined4 *)(param_1 + 4),0xb0000d,0);
  return;
}

