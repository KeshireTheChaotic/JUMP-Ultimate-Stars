
uint FUN_0205cd80(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1 + 3U & 0xfffffffc;
  if ((uint)(param_1 + param_2) < uVar4) {
    return 0;
  }
  uVar3 = (param_1 + param_2) - uVar4;
  if (uVar3 < 0x10) {
    return 0;
  }
  iVar1 = FUN_0205eb74(uVar4 + 0x10,uVar3 - 0x10,0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = FUN_0205ca9c(uVar4,iVar1);
  if (iVar2 == 0) {
    thunk_FUN_0205e2e4(iVar1);
    return 0;
  }
  return uVar4;
}

