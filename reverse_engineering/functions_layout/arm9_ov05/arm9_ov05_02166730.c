
void FUN_02166730(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_28 [3];
  
  FUN_021634b4(local_28,&DAT_0217146c);
  iVar2 = 0;
  do {
    uVar1 = FUN_0207281c(iVar2);
    FUN_021640c0(uVar1,param_1 + 0x20 + (iVar2 * 5 + 1) * 4,0xb20003,5,local_28,6);
    iVar2 = iVar2 + 1;
    local_28[0] = local_28[0] + 0x22000;
  } while (iVar2 < 6);
  return;
}

