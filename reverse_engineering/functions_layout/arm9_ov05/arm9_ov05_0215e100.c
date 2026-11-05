
int FUN_0215e100(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_stack_0000000c;
  int in_stack_00000010;
  int *in_stack_00000014;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar3 = 0;
  FUN_0215e244();
  FUN_0214d438();
  DAT_020a0dd0 = *(undefined4 *)(param_1 + 4);
  if (in_stack_0000000c != 0) {
    piVar1 = (int *)FUN_02035c90(in_stack_0000000c);
    if (piVar1[0xe] == 0) {
      (**(code **)(*piVar1 + 0x14))();
    }
    iVar3 = piVar1[0xe];
  }
  FUN_02036ab8();
  iVar2 = FUN_021504fc();
  if (in_stack_00000010 != 0) {
    (**(code **)(**(int **)(iVar2 + 4) + 0x130))();
  }
  if (iVar3 != 0) {
    if (iVar3 == 0) {
      piVar1 = *(int **)(*(int *)(iVar2 + 4) + 100);
      (**(code **)(*piVar1 + 0x50))(piVar1,0,0);
    }
    else {
      piVar1 = *(int **)(*(int *)(iVar2 + 4) + 100);
      (**(code **)(*piVar1 + 0x50))(piVar1,*(undefined4 *)(iVar3 + 4),0);
    }
  }
  local_14 = 0;
  local_10 = 0;
  FUN_0214ce68(iVar2,&local_10,&local_14);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),0);
  if (iVar3 != 0) {
    if (in_stack_00000014 == (int *)0x0) {
      FUN_02034d7c(iVar3);
    }
    else {
      *in_stack_00000014 = iVar3;
    }
  }
  FUN_0214d4cc();
  return iVar2;
}

