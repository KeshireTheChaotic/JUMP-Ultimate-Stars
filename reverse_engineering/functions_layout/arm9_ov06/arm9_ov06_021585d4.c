
void FUN_021585d4(int param_1,int param_2,int param_3,int param_4,short param_5,short param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_3 * 0x100;
  iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x7c) + 0x10) + 0x5c);
  iVar4 = param_4;
  iVar1 = FUN_0215793c();
  if (iVar1 != 0) {
    iVar2 = param_3 * -0x100;
    param_5 = -param_5;
  }
  FUN_02164d48((&DAT_0217214c)[param_2],iVar2 + *(int *)(iVar3 + 0xc),
               *(int *)(iVar3 + 0x10) + param_4 * 0x100,((int)param_5 << 0x18) >> 0x10,
               ((int)param_6 << 0x18) >> 0x10,0,iVar4);
  return;
}

