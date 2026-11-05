
void FUN_021554ac(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6,undefined4 param_7,undefined4 param_8,undefined1 param_9)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int unaff_r7;
  int unaff_r8;
  int iVar6;
  int *piVar7;
  bool in_CY;
  undefined2 in_stack_00000024;
  
  if (in_CY) {
    uVar1 = param_2 - 0xa0U >> 8;
    if (*(char *)(unaff_r7 + 0x58b) == '\x05') {
      iVar5 = 0;
      do {
        iVar2 = FUN_02154a7c();
        iVar4 = *(int *)(*(int *)(iVar2 + 4) + 0x10);
        iVar6 = *(int *)(unaff_r7 + 0x56c);
        FUN_0215523c(&param_6,iVar2);
        iVar6 = param_6 + iVar6 * 0x1000 + -0xa0000;
        if ((int)(iVar6 + ((uint)(iVar6 >> 0xb) >> 0x14)) >> 0xc < iVar4 * 0x100 + 0xe0) {
          for (iVar6 = iVar5 + uVar1 * -8 + 0x14; iVar6 < 0; iVar6 = iVar6 + 0x14) {
          }
          for (; 0x13 < iVar6; iVar6 = iVar6 + -8) {
          }
          uVar3 = FUN_0214d784(*(undefined1 *)(unaff_r7 + 2),
                               *(undefined1 *)(unaff_r8 + iVar6 + 0x74));
          FUN_02051890(uVar3,&param_9,0x14);
          in_stack_00000024 = 0;
          piVar7 = *(int **)(iVar2 + 4);
          (**(code **)(*(int *)piVar7[0x19] + 0x70))();
          (**(code **)(*piVar7 + 0xc4))();
          piVar7 = *(int **)(*(int *)(iVar2 + 4) + 100);
          (**(code **)(*piVar7 + 0x6c))(piVar7,&param_9,0xffffffff);
          if (iVar4 != 0) {
            (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),iVar4 + -1);
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 8);
    }
    else {
      iVar5 = 0;
      do {
        iVar2 = FUN_02154a7c();
        iVar6 = *(int *)(*(int *)(iVar2 + 4) + 0x10);
        FUN_0215523c(&param_5,iVar2);
        if (iVar6 * 0x100 + 0x200U <
            (uint)(*(int *)(unaff_r7 + 0x56c) +
                  ((int)(param_5 + ((uint)(param_5 >> 0xb) >> 0x14)) >> 0xc) + -0x80)) {
          for (iVar4 = iVar5 + (uVar1 + 1) * -8 + 0x14; iVar4 < 0; iVar4 = iVar4 + 0x14) {
          }
          uVar3 = FUN_0214d784(*(undefined1 *)(unaff_r7 + 2),
                               *(undefined1 *)(unaff_r8 + iVar4 + 0x74));
          FUN_02051890(uVar3,&param_9,0x14);
          in_stack_00000024 = 0;
          piVar7 = *(int **)(iVar2 + 4);
          (**(code **)(*(int *)piVar7[0x19] + 0x70))();
          (**(code **)(*piVar7 + 0xc4))();
          piVar7 = *(int **)(*(int *)(iVar2 + 4) + 100);
          (**(code **)(*piVar7 + 0x6c))(piVar7,&param_9,0xffffffff);
          (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),iVar6 + 1);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 8);
    }
  }
  return;
}

