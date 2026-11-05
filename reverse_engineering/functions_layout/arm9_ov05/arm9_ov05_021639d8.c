
int FUN_021639d8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_210 [256];
  undefined1 auStack_110 [256];
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  FUN_020517fc(auStack_110,0,0x100);
  FUN_020517fc(auStack_210,0,0x100);
  thunk_FUN_0207400c(auStack_110,param_1);
  thunk_FUN_020741c4(auStack_110,&DAT_021713b4);
  thunk_FUN_0207400c(auStack_210,param_1);
  thunk_FUN_020741c4(auStack_210,&DAT_021713bc);
  FUN_02163afc(param_2);
  piVar1 = (int *)FUN_02035c90(auStack_210);
  if (piVar1[0xe] == 0) {
    (**(code **)(*piVar1 + 0x14))();
  }
  iVar3 = piVar1[0xe];
  FUN_02036ab8();
  iVar2 = FUN_021504fc();
  (**(code **)(**(int **)(iVar2 + 4) + 0x130))(*(int **)(iVar2 + 4),auStack_110);
  if (iVar3 == 0) {
    piVar1 = *(int **)(*(int *)(iVar2 + 4) + 100);
    (**(code **)(*piVar1 + 0x50))(piVar1,0,0);
  }
  else {
    piVar1 = *(int **)(*(int *)(iVar2 + 4) + 100);
    (**(code **)(*piVar1 + 0x50))(piVar1,*(undefined4 *)(iVar3 + 4),0);
  }
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  FUN_02034d7c(iVar3);
  FUN_0214d4cc();
  return iVar2;
}

