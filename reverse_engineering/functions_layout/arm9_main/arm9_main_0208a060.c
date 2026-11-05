
undefined4 FUN_0208a060(void)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
                    /* JUS-TAG strings=["CommLib.cpp"] */
  DAT_0214be42 = 0;
  if (DAT_0214bea4 != 6) {
    return 0;
  }
  iVar2 = FUN_02089f20();
  if (iVar2 == 0) {
    return 0;
  }
  uVar5 = 0;
  do {
    bVar1 = true;
    for (uVar6 = 0; uVar6 < 8; uVar6 = uVar6 + 1) {
      if (((&DAT_0214ca28)[uVar6] != '\0') && (1 < DAT_020a0f10)) {
        puVar4 = (undefined *)(DAT_020a0f10 << 0x10);
        puVar3 = &DAT_0214be40;
        uVar7 = DAT_020a0f10 & 0xffff;
        DAT_0214be42 = 1;
        if ((&DAT_0214ca28)[uVar6] != '\0') {
          if (1 < uVar7) {
            puVar4 = (undefined *)(uint)(ushort)(&DAT_0214ca60)[uVar6 * 4];
            puVar3 = (undefined *)(uVar7 - 2);
            if (puVar4 < puVar3) goto LAB_0208a118;
          }
          if (1 >= uVar7) {
            puVar4 = (undefined *)(uint)(ushort)(&DAT_0214ca60)[uVar6 * 4];
            puVar3 = (undefined *)(uVar7 + 0xfffe);
          }
          if (1 < uVar7 || puVar3 <= puVar4) goto LAB_0208a1a0;
        }
LAB_0208a118:
        uVar5 = uVar5 + 1;
        if (0xb4 < uVar5) {
          FUN_02088904(9,s_CommLib_cpp_020a0338,0xa1e);
          break;
        }
        bVar1 = false;
        FUN_020552a8();
        iVar2 = FUN_02089f20();
        if (iVar2 == 0) {
          return 0;
        }
        for (uVar7 = 0; uVar7 < 4; uVar7 = uVar7 + 1) {
          if ((undefined4 *)(&DAT_0214bebc)[uVar7] != (undefined4 *)0x0) {
            (**(code **)(**(int **)(&DAT_0214bebc)[uVar7] + 0x14))();
          }
          if ((&DAT_0214beac)[uVar7] != 0) {
            (**(code **)(**(int **)((&DAT_0214beac)[uVar7] + 4) + 0x124))();
          }
        }
      }
LAB_0208a1a0:
    }
    if (bVar1) {
      return 1;
    }
  } while( true );
}

