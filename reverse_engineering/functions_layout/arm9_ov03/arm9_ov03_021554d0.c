
void FUN_021554d0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int iVar4;
  int *piVar5;
  undefined4 uStack00000004;
  undefined1 uStack00000010;
  undefined2 in_stack_00000024;
  
  do {
    iVar1 = FUN_02154a7c();
    iVar3 = *(int *)(*(int *)(iVar1 + 4) + 0x10);
    iVar4 = *(int *)(unaff_r7 + 0x56c);
    FUN_0215523c(&uStack00000004,iVar1);
    iVar4 = uStack00000004 + iVar4 * 0x1000 + -0xa0000;
    if ((int)(iVar4 + ((uint)(iVar4 >> 0xb) >> 0x14)) >> 0xc < iVar3 * 0x100 + 0xe0) {
      for (iVar4 = unaff_r6 + unaff_r9; iVar4 < 0; iVar4 = iVar4 + 0x14) {
      }
      for (; 0x13 < iVar4; iVar4 = iVar4 + -8) {
      }
      uVar2 = FUN_0214d784(*(undefined1 *)(unaff_r7 + 2),*(undefined1 *)(unaff_r8 + iVar4 + 0x74));
      FUN_02051890(uVar2,&uStack00000010,0x14);
      in_stack_00000024 = 0;
      piVar5 = *(int **)(iVar1 + 4);
      (**(code **)(*(int *)piVar5[0x19] + 0x70))();
      (**(code **)(*piVar5 + 0xc4))();
      piVar5 = *(int **)(*(int *)(iVar1 + 4) + 100);
      (**(code **)(*piVar5 + 0x6c))(piVar5,&uStack00000010,0xffffffff);
      if (iVar3 != 0) {
        (**(code **)(**(int **)(iVar1 + 4) + 0x24))(*(int **)(iVar1 + 4),iVar3 + -1);
      }
    }
    unaff_r6 = unaff_r6 + 1;
  } while (unaff_r6 < 8);
  return;
}

