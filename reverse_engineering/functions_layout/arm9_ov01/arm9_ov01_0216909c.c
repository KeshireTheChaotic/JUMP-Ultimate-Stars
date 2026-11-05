
int FUN_0216909c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_210 [256];
  undefined1 auStack_110 [256];
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  FUN_020517fc(auStack_110,0,0x100);
  FUN_020517fc(auStack_210,0,0x100);
  thunk_FUN_0207400c(auStack_110,param_1);
  thunk_FUN_020741c4(auStack_110,&DAT_0216dd9c);
  thunk_FUN_0207400c(auStack_210,param_1);
  thunk_FUN_020741c4(auStack_210,&DAT_0216dda4);
  FUN_0214f7f8(param_2);
  FUN_02035c90(auStack_210);
  iVar1 = FUN_02158558();
  FUN_02036ab8();
  iVar2 = FUN_0214d37c();
  (**(code **)(**(int **)(iVar2 + 4) + 0x130))(*(int **)(iVar2 + 4),auStack_110);
  if (iVar1 == 0) {
    piVar3 = *(int **)(*(int *)(iVar2 + 4) + 100);
    (**(code **)(*piVar3 + 0x50))(piVar3,0,0);
  }
  else {
    piVar3 = *(int **)(*(int *)(iVar2 + 4) + 100);
    (**(code **)(*piVar3 + 0x50))(piVar3,*(undefined4 *)(iVar1 + 4),0);
  }
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  FUN_02034d7c(iVar1);
  FUN_0214f834();
  return iVar2;
}

