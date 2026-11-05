
void FUN_021520dc(void)

{
  int *piVar1;
  int unaff_r4;
  int iVar2;
  int unaff_r6;
  undefined4 uStack00000000;
  undefined4 uStack00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  
  if (unaff_r6 == 6) {
    func_0x021b65cc();
    iVar2 = 0;
    do {
      FUN_02153a9c();
      iVar2 = iVar2 + 1;
    } while (iVar2 < 6);
    FUN_0207342c(0x78,0);
  }
  else {
    *(undefined1 *)(unaff_r4 + unaff_r6 + 0x546) = 1;
    *(undefined1 *)(unaff_r4 + unaff_r6 + 0x54c) = 1;
    iVar2 = unaff_r6 * 0x14;
    FUN_0215ed18(unaff_r4 + 0x3dc,1,0x1f,1);
    func_0x021b65d8(*(undefined4 *)(*(int *)(unaff_r4 + 100) + 4));
    func_0x021b65d8(*(undefined4 *)(*(int *)(unaff_r4 + 0x90) + 4));
    if (unaff_r6 == 3) {
      *(char *)(unaff_r4 + 0x542) = (char)((uint)*(undefined4 *)(unaff_r4 + 0x460) >> 0x10);
    }
    *(char *)(unaff_r4 + 0x439) = (char)unaff_r6;
    *(undefined *)(unaff_r4 + 0x46d) = (&DAT_0216d564)[iVar2];
    uStack00000008 = 0xffff0000;
    uStack0000000c = 0xffff8000;
    FUN_0214ce68(*(undefined4 *)(unaff_r4 + unaff_r6 * 4 + 0x188),&uStack0000000c,&uStack00000008);
    piVar1 = *(int **)(*(int *)(unaff_r4 + unaff_r6 * 4 + 0x188) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,1);
    (**(code **)(&DAT_0216d558 + iVar2))();
    FUN_02153b7c();
    FUN_02073f24(0x12,0,0x1e);
    func_0x021b6214(*(undefined4 *)(*(int *)(unaff_r4 + 0xcc) + 4),1);
    uStack00000004 = (uint)(byte)(&DAT_0216d562)[iVar2] << 0xc;
    uStack00000000 = (uint)(byte)(&DAT_0216d561)[iVar2] << 0xc;
    FUN_0214ce68(*(undefined4 *)(unaff_r4 + 0xcc),&uStack00000000,&uStack00000004);
    FUN_02028384(*(undefined4 *)(*(int *)(unaff_r4 + 0xcc) + 4),FUN_02153228);
    FUN_0207342c(0x78,4);
  }
  return;
}

