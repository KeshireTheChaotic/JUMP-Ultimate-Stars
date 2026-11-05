
void FUN_021520dc(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int unaff_r5;
  int unaff_r7;
  undefined4 uStack00000014;
  undefined4 uStack00000018;
  undefined4 uStack0000001c;
  
  FUN_0203cfbc(*(undefined4 *)(param_1 + 4),0,0);
  iVar1 = FUN_0203b424(1);
  uStack00000014 = 0x1000;
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x10))(piVar2,&uStack00000014);
  iVar1 = FUN_0203b424(2);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),1);
  iVar1 = FUN_0203b424(2);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),4);
  iVar1 = FUN_0203b424(2);
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x90))(piVar2,0);
  iVar1 = FUN_0203b424(2);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),0,0);
  iVar1 = FUN_0203b424(2);
  uStack00000018 = 0x2000;
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x10))(piVar2,&uStack00000018);
  iVar1 = FUN_0203b424(3);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),5);
  iVar1 = FUN_0203b424(3);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),0x20,0x20);
  iVar1 = FUN_0203b424(3);
  uStack0000001c = 0x3000;
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x10))(piVar2,&uStack0000001c);
  iVar1 = FUN_0203b424(3);
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x90))(piVar2,0x20000);
  iVar1 = FUN_0203b424(3);
  *(undefined1 *)(*(int *)(*(int *)(iVar1 + 0x88) + 4) + 0x974) = 1;
  FUN_02064744(unaff_r5 + 0xc);
  iVar1 = FUN_0206451c(unaff_r5 + 0xc);
  if (iVar1 != 0) {
    iVar1 = FUN_02152bb4(unaff_r5 + 0xc,0xc,*(byte *)(unaff_r5 + 0xe4) & 1);
    *(int *)(unaff_r5 + 0x9c) = iVar1;
    if (iVar1 != 0 && unaff_r7 != 0) {
      FUN_02064744(unaff_r5 + 0x54);
      iVar1 = FUN_0206451c(unaff_r5 + 0x54);
      if (iVar1 != 0) {
        uVar3 = FUN_02152bb4(unaff_r5 + 0x54,0xc,*(byte *)(unaff_r5 + 0xe4) & 1);
        *(undefined4 *)(unaff_r5 + 0xa0) = uVar3;
      }
    }
  }
  iVar1 = FUN_02152b6c(*(undefined4 *)(unaff_r5 + 0x9c));
  iVar4 = FUN_02152b48(*(undefined4 *)(unaff_r5 + 0x9c));
  iVar1 = FUN_0200d338(iVar1 << 0x10,iVar4 << 7);
  iVar4 = (iVar1 + 1) * 0xc + 1;
  *(int *)(unaff_r5 + 0xa4) = iVar1 + 1;
  *(int *)(unaff_r5 + 0xa8) = iVar4;
  uVar3 = FUN_02151bcc(iVar4 * 0x100);
  *(undefined4 *)(unaff_r5 + 0xac) = uVar3;
  uVar5 = FUN_02152b48(*(undefined4 *)(unaff_r5 + 0x9c));
  uVar3 = FUN_0200d338((uVar5 >> 0x10) * 0x7fd88,0x3c);
  *(undefined4 *)(unaff_r5 + 0xc4) = uVar3;
  *(undefined4 *)(unaff_r5 + 200) = 0;
  FUN_0204267c(DAT_020a0f64,&LAB_02152868);
  return;
}

