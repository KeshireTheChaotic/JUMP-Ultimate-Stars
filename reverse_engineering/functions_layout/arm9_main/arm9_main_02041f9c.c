
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02041f9c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uStack_28;
  
                    /* JUS-TAG hw={"GX_3D":1} io=["04000540"] */
  uStack_28 = param_4;
  uVar10 = FUN_02054b44();
  FUN_020315e4();
  (**(code **)(*DAT_020a0dfc + 0x10))();
  uVar11 = FUN_02054b44();
  FUN_020322bc(DAT_020a0cec);
  uVar1 = (uint)DAT_020a1484;
  while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
    iVar6 = *(int *)(DAT_020a147c + uVar1 * DAT_020a1480);
    if (iVar6 != 0) {
      if (*(char *)(iVar6 + 0x38) != '\0') {
        uVar9 = *(undefined4 *)(iVar6 + 0x24);
        iVar2 = FUN_0201a9ec(uVar9);
        if (iVar2 == 0) {
          FUN_0201a958(uVar9,1);
        }
      }
      iVar2 = FUN_0201a9ec(iVar6);
      if (iVar2 == 0) {
        FUN_0201a958(iVar6,1);
      }
    }
  }
  DAT_020a1484 = 0;
  uVar12 = FUN_02054b44();
  DAT_020a10e4 = (uint)uVar12 - (uint)uVar11;
  DAT_020a10e8 = (int)((ulonglong)uVar12 >> 0x20) -
                 ((int)((ulonglong)uVar11 >> 0x20) + (uint)((uint)uVar12 < (uint)uVar11));
  _DAT_04000540 = 0;
  DAT_02093be8 = DAT_02093be8 + 1;
  uVar11 = FUN_02054b44();
  DAT_020a10d4 = (uint)uVar11 - DAT_020a10fc;
  DAT_020a10d8 = (int)((ulonglong)uVar11 >> 0x20) -
                 (DAT_020a1100 + (uint)((uint)uVar11 < DAT_020a10fc));
  if (DAT_020a0c53 == '\0') {
    uVar1 = 0;
    do {
      FUN_0203d31c((&DAT_020a1700)[uVar1]);
      FUN_0203d31c((&DAT_020a1710)[uVar1]);
      uVar1 = uVar1 + 1;
    } while (uVar1 < 4);
  }
  if (DAT_020a0c36 != '\0') {
    uVar1 = DAT_020a100c ^ 1;
    piVar7 = DAT_020a10ec;
    while (piVar7 != (int *)0x0) {
      iVar6 = *piVar7;
      if (*(char *)(piVar7 + 2) != '\0') {
        FUN_02037c24(&DAT_020a10ec,piVar7);
        piVar3 = (int *)FUN_02037f84(&DAT_020a147c);
        *piVar3 = (int)piVar7;
      }
      piVar7 = (int *)iVar6;
    }
    for (uVar8 = 0; uVar8 < *(uint *)(param_1 + 0x428); uVar8 = uVar8 + 1) {
      FUN_02037b98(&DAT_020a10ec,*(undefined4 *)(*(int *)(param_1 + 0x424) + uVar8 * 4));
    }
    iVar6 = *(int *)(param_1 + 0x428);
    FUN_0200f69c(&uStack_28,1);
    *(int *)(param_1 + 0x428) = *(int *)(param_1 + 0x428) - iVar6;
    if (DAT_020a0c3d != '\0') {
      uVar8 = DAT_020a0fd4 ^ 1;
      FUN_02037c54(&DAT_020a10ec,FUN_02042428,0);
      iVar6 = uVar8 * 0xc;
      *(undefined2 *)(&DAT_020a1780 + iVar6) = 0;
      for (puVar5 = DAT_020a10ec; puVar5 != (undefined4 *)0x0; puVar5 = (undefined4 *)*puVar5) {
        if (puVar5[(DAT_020a100c ^ 1) + 3] != 0) {
          puVar4 = (undefined4 *)FUN_02037f84(&DAT_020a1778 + iVar6);
          *puVar4 = puVar5;
        }
      }
      puVar5 = (undefined4 *)FUN_02037f84(&DAT_020a1778 + iVar6);
      *puVar5 = 0;
      DAT_020a0fd4 = uVar8;
    }
    DAT_020a100c = uVar1;
  }
  DAT_020a0c3e = 1;
  if (*(char *)(param_1 + 0x430) != '\0') {
    FUN_02042370(0);
  }
  FUN_020552a8();
  DAT_020a0c3e = 0;
  DAT_020a0c3d = 0;
  DAT_020a0c36 = 0;
  uVar11 = FUN_02054b44();
  DAT_020a1100 = (int)((ulonglong)uVar11 >> 0x20);
  DAT_020a10fc = (uint)uVar11;
  (*DAT_02093be4)(0);
  FUN_0203efb8(DAT_020a0f20);
  (**(code **)(*DAT_020a0dfc + 0x14))();
  if (*(char *)(param_1 + 0x430) != '\0') {
    FUN_02042370(1);
  }
  FUN_02028ee0();
  FUN_02028f24();
  FUN_02020c04();
  FUN_020322fc(DAT_020a0cec);
  uVar1 = 0;
  DAT_020a0dc8 = 0;
  do {
    FUN_0203c5ac((&DAT_020a1700)[uVar1]);
    FUN_0203c5ac((&DAT_020a1710)[uVar1]);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  uVar11 = FUN_02054b44();
  DAT_020a10dc = (uint)uVar11 - DAT_020a10fc;
  DAT_020a10e0 = (int)((ulonglong)uVar11 >> 0x20) -
                 (DAT_020a1100 + (uint)((uint)uVar11 < DAT_020a10fc));
  FUN_020345d4(DAT_020a0f64);
  uVar11 = FUN_02054b44();
  DAT_020a10f4 = (uint)uVar11 - (uint)uVar10;
  DAT_020a10f8 = (int)((ulonglong)uVar11 >> 0x20) -
                 ((int)((ulonglong)uVar10 >> 0x20) + (uint)((uint)uVar11 < (uint)uVar10));
  return;
}

