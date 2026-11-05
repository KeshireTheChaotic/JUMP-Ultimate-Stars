
void FUN_021b0aa0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  
                    /* JUS-TAG source_file_inferred="ALCollision.cpp" */
  if (*(char *)(param_1 + 0x22) != '\0') {
    iVar1 = FUN_021b0a78();
    uVar4 = 0;
    uVar2 = FUN_021b0b48(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x34));
    uVar5 = 0;
    do {
      if ((1 << (uVar5 & 0xff) & *(uint *)(param_1 + 0x2c)) != 0) {
        if (uVar4 == 0) {
          *(undefined1 *)(param_1 + 0x22) = 0;
          iVar3 = FUN_0203113c(uVar2);
          FUN_02037f58(*(undefined4 *)(*(int *)(iVar3 + 4) + uVar5 * 4 + 0x48),iVar1 + 8);
          uVar4 = 1;
        }
        else {
          piVar6 = *(int **)(*(int *)(param_1 + 0x58) + uVar4 * 4 + -4);
          iVar3 = FUN_0203113c(uVar2);
          FUN_02037f58(*(undefined4 *)(*(int *)(iVar3 + 4) + uVar5 * 4 + 0x48),piVar6 + 2);
          piVar6[1] = DAT_021d5134;
          if (piVar6 != (int *)0x0) {
            (**(code **)(*piVar6 + 4))();
          }
          uVar4 = uVar4 + 1;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x20);
    if (1 < uVar4) {
      FUN_0201b268(*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
  }
  return;
}

