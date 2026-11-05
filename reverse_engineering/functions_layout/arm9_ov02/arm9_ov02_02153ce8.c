
void FUN_02153ce8(int *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int iVar4;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int unaff_r11;
  undefined1 uStack00000018;
  undefined4 uStack00000024;
  int in_stack_00000028;
  
  do {
    (**(code **)(*param_1 + 0x6c))();
    unaff_r6 = unaff_r6 + 1;
    while ((int)(uint)*(byte *)(unaff_r5 + 0x44) <= unaff_r6) {
      unaff_r4 = unaff_r4 + 1;
      if ((int)(uint)*(byte *)(unaff_r10 + 0x35f) <= unaff_r4) {
        return;
      }
      unaff_r9 = unaff_r4 * 0x28 + unaff_r10;
      unaff_r5 = *(int *)(*(int *)(*(int *)(unaff_r9 + 0xd8) + 4) + 0x124) * 0x48 +
                 *(int *)(*(int *)(unaff_r10 + 0x330) + 0x34);
      uStack00000024 = (*(short *)(unaff_r5 + 0x2c) - unaff_r11) * 0x1000;
      in_stack_00000028 = (*(short *)(unaff_r5 + 0x2e) - unaff_r8) * 0x1000;
      FUN_0214f960(*(int *)(unaff_r9 + 0xd8),&uStack00000024);
      unaff_r6 = 0;
    }
    iVar3 = unaff_r9 + unaff_r6 * 4;
    uVar2 = *(undefined4 *)(iVar3 + 0xdc);
    iVar4 = *(int *)(iVar3 + 0xec);
    bVar1 = *(byte *)(unaff_r9 + unaff_r6 + 0xfc);
    FUN_0214fa00(&uStack00000018,
                 unaff_r6 * 0xc + (*(byte *)(unaff_r5 + 0x44) - 1) * 0x30 + iRam02153d24);
    FUN_0214f960(uVar2,&uStack00000018);
    iVar3 = *(int *)(iVar4 + 4);
    FUN_02023894(iVar3,(uint)bVar1 * 2 + 0x30001 + *(int *)(iVar3 + 0x10) * 0x10,0);
    param_1 = *(int **)(*(int *)(iVar4 + 4) + 0x68);
  } while( true );
}

