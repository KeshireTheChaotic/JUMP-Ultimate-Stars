
void FUN_0202788c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar5 = param_4;
  if (*(int **)(param_1 + 0x30) == (int *)&DAT_020a11b8) {
    iVar1 = FUN_0201a228(0xb4);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = jus_Class_0209674c::jus_Class_0209674c();
    }
    *(undefined4 *)(param_1 + 0x30) = uVar2;
  }
  else {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x30) + 0x10))();
    if (iVar1 == 0) {
      iVar1 = FUN_0201a228(0xb4);
      piVar3 = (int *)0x0;
      if (iVar1 != 0) {
        piVar3 = (int *)jus_Class_0209674c::jus_Class_0209674c();
      }
      uVar4 = 0;
      do {
        iVar1 = (**(code **)(**(int **)(param_1 + 0x30) + 0x50))(*(int **)(param_1 + 0x30),uVar4);
        if (iVar1 != 0) {
          (**(code **)(*piVar3 + 0x54))(piVar3,uVar4);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 0xe);
      (**(code **)(**(int **)(param_1 + 0x30) + 0xc))();
      *(int **)(param_1 + 0x30) = piVar3;
    }
  }
  (**(code **)(**(int **)(param_1 + 0x30) + 0x5c))
            (*(int **)(param_1 + 0x30),param_2,param_3,param_4,uVar5);
  return;
}

