
int FUN_02162da4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int extraout_r1;
  code *pcVar4;
  undefined1 auStack_90 [128];
  
  FUN_0214f7f8(param_3);
  FUN_02035c90(param_2);
  iVar1 = FUN_02158558();
  FUN_02036ab8();
  iVar2 = FUN_0214d37c();
  (**(code **)(**(int **)(iVar2 + 4) + 0x130))(*(int **)(iVar2 + 4),param_1);
  if (iVar1 == 0) {
    piVar3 = *(int **)(*(int *)(iVar2 + 4) + 100);
    (**(code **)(*piVar3 + 0x50))(piVar3,0,0);
  }
  else {
    piVar3 = *(int **)(*(int *)(iVar2 + 4) + 100);
    (**(code **)(*piVar3 + 0x50))(piVar3,*(undefined4 *)(iVar1 + 4),0);
  }
  pcVar4 = *(code **)(**(int **)(iVar2 + 4) + 0xd8);
  (*pcVar4)(*(int **)(iVar2 + 4),1);
  FUN_02034d7c(iVar1);
  FUN_0214f834();
  FUN_0214f7f8(pcVar4);
  if (extraout_r1 == 0) {
    FUN_020329d4();
    iVar1 = FUN_0214d37c();
  }
  else {
    FUN_020329ec(extraout_r1);
    iVar1 = FUN_0214d37c();
  }
  if (iVar2 != 0) {
    FUN_02023894(*(undefined4 *)(iVar1 + 4),iVar2,0);
    (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x68) + 0x6c))();
  }
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x54) = uRam02162e7c;
  FUN_0214e6c0(iVar1,auStack_90 + 0x80);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  FUN_0214f834();
  return iVar1;
}

