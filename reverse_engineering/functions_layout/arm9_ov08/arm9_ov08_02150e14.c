
void FUN_02150e14(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_18 [12];
  
  FUN_02150588(auStack_18,param_2 + 0x10,8);
  uVar1 = *(uint *)(param_2 + 0x10) >> 3 & 0x3f;
  if (uVar1 < 0x38) {
    iVar2 = 0x38 - uVar1;
  }
  else {
    iVar2 = 0x78 - uVar1;
  }
  FUN_02150e70(param_2,&DAT_0216affc,iVar2);
  FUN_02150e70(param_2,auStack_18,8);
  FUN_02150588(param_1,param_2,0x10);
  FUN_02150524(param_2,0,0x58);
  return;
}

