
int FUN_02162dc4(int param_1)

{
  int *piVar1;
  int iVar2;
  int extraout_r1;
  code *pcVar3;
  code *pcVar4;
  int unaff_r4;
  undefined4 unaff_r6;
  undefined4 uStack00000000;
  
  (**(code **)(**(int **)(param_1 + 4) + 0x130))(*(int **)(param_1 + 4),unaff_r6);
  if (unaff_r4 == 0) {
    piVar1 = *(int **)(*(int *)(param_1 + 4) + 100);
    pcVar4 = *(code **)(*piVar1 + 0x50);
    (*pcVar4)(piVar1,0,0);
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 4) + 100);
    pcVar4 = *(code **)(*piVar1 + 0x50);
    (*pcVar4)(piVar1,*(undefined4 *)(unaff_r4 + 4),0);
  }
  pcVar3 = *(code **)(**(int **)(param_1 + 4) + 0xd8);
  (*pcVar3)(*(int **)(param_1 + 4),1);
  FUN_02034d7c(unaff_r4);
  FUN_0214f834();
  FUN_0214f7f8(pcVar3);
  if (extraout_r1 == 0) {
    FUN_020329d4();
    iVar2 = FUN_0214d37c();
  }
  else {
    FUN_020329ec(extraout_r1);
    iVar2 = FUN_0214d37c();
  }
  if (param_1 != 0) {
    FUN_02023894(*(undefined4 *)(iVar2 + 4),param_1,0);
    (**(code **)(**(int **)(*(int *)(iVar2 + 4) + 0x68) + 0x6c))();
  }
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x54) = uRam02162e7c;
  uStack00000000 = (int)pcVar4 << 0xc;
  FUN_0214e6c0(iVar2,&uStack00000000);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  FUN_0214f834();
  return iVar2;
}

