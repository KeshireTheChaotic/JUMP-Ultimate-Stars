
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215428c(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  iVar6 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar3 = FUN_0207382c();
  if (iVar3 != 0) {
    iVar3 = FUN_0203b3e4();
    FUN_021500b0(*(undefined4 *)(iVar3 + 0x88),0,0);
    DAT_020afcb8 = *(uint *)(iVar6 + 0xf4) & 0xff | (*(uint *)(iVar6 + 0xf8) & 0xff) << 8;
    FUN_02156200(iVar6);
    FUN_02156258(iVar6);
    if (*(int *)(iVar6 + 0x80) != 0) {
      FUN_0206ae98();
      *(undefined4 *)(iVar6 + 0x80) = 0;
    }
    _DAT_021d5154 = 0;
    func_0x021b526c(1);
    if (*(int *)(iVar6 + 0xe8) != 0) {
      FUN_02075758();
      *(undefined4 *)(iVar6 + 0xe8) = 0;
    }
    iVar3 = 0;
    do {
      if (*(int *)(iVar6 + iVar3 * 4 + 0x84) != 0) {
        FUN_0206ae98();
        *(undefined4 *)(iVar6 + iVar3 * 4 + 0x84) = 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x14);
    if (*(int *)(iVar6 + 0xd4) != 0) {
      func_0x021bab64();
      *(undefined4 *)(iVar6 + 0xd4) = 0;
    }
    iVar3 = 0;
    do {
      iVar7 = iVar6 + iVar3 * 4;
      piVar4 = *(int **)(iVar7 + 0x34);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))();
        *(undefined4 *)(iVar7 + 0x34) = 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
    iVar3 = 0;
    do {
      iVar7 = iVar6 + iVar3 * 4;
      piVar4 = *(int **)(iVar7 + 0x10);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0xc))();
        *(undefined4 *)(iVar7 + 0x10) = 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 5);
    uVar8 = 0;
    do {
      iVar3 = iVar6 + uVar8;
      bVar2 = *(byte *)(iVar3 + 0x110);
      bVar1 = *(byte *)(iVar3 + 0xfc);
      if (bVar1 != bVar2) {
        uVar5 = 0;
        do {
          if ((1 << uVar5 & (uint)(bVar1 ^ bVar2)) != 0) {
            FUN_020722a4((&DAT_02169d28)[uVar5],*(undefined1 *)(iVar3 + uVar5 * 0x14 + 0x178));
          }
          uVar5 = uVar5 + 1 & 0xff;
        } while (uVar5 < 4);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 0x14);
    _DAT_021d514c = 0;
    func_0x021b7260(1);
    func_0x021b7260(2,0);
    func_0x021b7260(8,0);
    func_0x021b7260(4,0);
    func_0x021b7260(0x10000,0);
    func_0x021b7260(0x10,0);
    func_0x021b7260(0x20,0);
    func_0x021b7260(0x10000,0);
    func_0x021b7260(0x20000,0);
    func_0x021b65cc();
    if (*(int **)(iVar6 + 8) != (int *)0x0) {
      (**(code **)(**(int **)(iVar6 + 8) + 8))();
      *(undefined4 *)(iVar6 + 8) = 0;
    }
    iVar3 = DAT_02093c04 + 1;
    DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
    DAT_02093c04 = iVar3;
    if (*(int *)(iVar6 + 4) != 0) {
      (**(code **)(**(int **)(*(int *)(iVar6 + 4) + 4) + 0xc))();
      *(undefined4 *)(iVar6 + 4) = 0;
    }
    FUN_0201b244(iVar6);
  }
  return;
}

