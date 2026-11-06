
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021524c4(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  undefined8 uVar11;
  
  iVar8 = 0;
  iVar7 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  FUN_02152b48(*(undefined4 *)(iVar7 + 0x9c));
  do {
    while( true ) {
      if (((*(byte *)(iVar7 + 0xe4) & 2) != 0) ||
         (iVar1 = FUN_02152b18(*(undefined4 *)(iVar7 + 0x9c)), iVar1 == 0)) {
        if (((*(byte *)(iVar7 + 0xe4) & 2) == 0) && (*(code **)(iVar7 + 0xd8) != (code *)0x0)) {
          (**(code **)(iVar7 + 0xd8))(*(undefined4 *)(iVar7 + 0xdc));
        }
        *(byte *)(iVar7 + 0xe4) = *(byte *)(iVar7 + 0xe4) | 2;
        FUN_020282f4(*(undefined4 *)(param_1 + 4));
        return;
      }
      FUN_02152ae8(*(undefined4 *)(iVar7 + 0x9c));
      if (*(int *)(iVar7 + 0xa0) != 0) {
        FUN_02152b18();
        FUN_02152ae8(*(undefined4 *)(iVar7 + 0xa0));
      }
      uVar2 = FUN_02152a64(*(undefined4 *)(iVar7 + 0x9c));
      uVar9 = 0;
      while (-1 < (int)uVar9 && uVar9 < uVar2) {
        if ((*(byte *)(iVar7 + 0xe4) & 4) != 0) {
          do {
            uVar6 = *(uint *)(iVar7 + 0xb0) - *(uint *)(iVar7 + 0xb8);
          } while ((*(int *)(iVar7 + 0xb4) -
                   (*(int *)(iVar7 + 0xbc) +
                   (uint)(*(uint *)(iVar7 + 0xb0) < *(uint *)(iVar7 + 0xb8)))) +
                   (uint)(*(uint *)(iVar7 + 0xa8) < uVar6) == 0 && *(uint *)(iVar7 + 0xa8) == uVar6)
          ;
        }
        FUN_02152a34(*(undefined4 *)(iVar7 + 0x9c),
                     *(int *)(iVar7 + 0xac) + *(int *)(iVar7 + 0xc0) * 2);
        DC_StoreRange(*(int *)(iVar7 + 0xac) + *(int *)(iVar7 + 0xc0) * 2,0x100);
        uVar9 = uVar9 + 1;
        iVar1 = *(int *)(iVar7 + 0xc0) + 0x80;
        *(int *)(iVar7 + 0xc0) = iVar1;
        if (iVar1 == *(int *)(iVar7 + 0xa8) * 0x80) {
          *(undefined4 *)(iVar7 + 0xc0) = 0;
        }
        uVar6 = *(uint *)(iVar7 + 0xb0);
        *(uint *)(iVar7 + 0xb0) = uVar6 + 1;
        *(uint *)(iVar7 + 0xb4) = *(int *)(iVar7 + 0xb4) + (uint)(0xfffffffe < uVar6);
      }
      if ((*(byte *)(iVar7 + 0xe4) & 4) == 0) {
        if ((iVar8 < 4) || (iVar1 = FUN_02152b6c(*(undefined4 *)(iVar7 + 0x9c)), iVar1 == 0)) {
          if (*(code **)(iVar7 + 0xd4) != (code *)0x0) {
            (**(code **)(iVar7 + 0xd4))(*(undefined4 *)(iVar7 + 0xdc));
          }
        }
        else {
          uVar3 = FUN_02152b6c(*(undefined4 *)(iVar7 + 0x9c));
          FUN_02152894(iVar7,uVar3);
          *(byte *)(iVar7 + 0xe4) = *(byte *)(iVar7 + 0xe4) | 4;
          uVar11 = OS_GetTick();
          *(uint *)(iVar7 + 0xcc) = (uint)uVar11 - *(uint *)(iVar7 + 0xc4);
          *(uint *)(iVar7 + 0xd0) =
               (int)((ulonglong)uVar11 >> 0x20) -
               (*(int *)(iVar7 + 200) + (uint)((uint)uVar11 < *(uint *)(iVar7 + 0xc4)));
          *(undefined4 *)(iVar7 + 0xe0) = 0;
          FUN_0201ad30(DAT_020a0dd8,1,1);
        }
      }
      if (3 < iVar8) break;
LAB_021527e0:
      iVar8 = iVar8 + 1;
      if (((*(byte *)(iVar7 + 0xe4) & 8) != 0) && ((*(byte *)(iVar7 + 0xe4) & 4) != 0)) {
        uVar3 = FUN_020733a8();
        uVar4 = FUN_0200c99c((&DAT_02160fd0)[*(byte *)(iVar7 + 0xe5)]);
        uVar4 = FUN_0200c5ac(uVar4,0x43000000);
        uVar3 = FUN_0200c99c(uVar3);
        FUN_0200c9e4(uVar4,uVar3);
        uVar3 = FUN_0200c8e0();
        FUN_020567e8(1,uVar3,0);
        if (*(byte *)(iVar7 + 0xe5) < 7) {
          *(byte *)(iVar7 + 0xe5) = *(byte *)(iVar7 + 0xe5) + 1;
        }
      }
    }
    uVar2 = *(int *)(iVar7 + 0xa4) * 3;
    iVar5 = *(int *)(iVar7 + 0xb4) -
            (*(int *)(iVar7 + 0xbc) + (uint)(*(uint *)(iVar7 + 0xb0) < *(uint *)(iVar7 + 0xb8)));
    bVar10 = uVar2 < *(uint *)(iVar7 + 0xb0) - *(uint *)(iVar7 + 0xb8);
    iVar1 = (int)uVar2 >> 0x1f;
    if (((int)(iVar1 - (iVar5 + (uint)bVar10)) < 0 !=
         (SBORROW4(iVar1,iVar5) != SBORROW4(iVar1 - iVar5,(uint)bVar10))) ||
       ((*(byte *)(iVar7 + 0xe4) & 4) == 0)) {
      iVar1 = FUN_0203b414(3);
      uVar3 = (**(code **)(*(int *)(*(int *)(iVar1 + 0x88) + 4) + 0x948))();
      FUN_02152ab8(*(undefined4 *)(iVar7 + 0x9c),uVar3,0x100);
      uVar2 = *(uint *)(iVar7 + 0xcc);
      *(uint *)(iVar7 + 0xcc) = uVar2 + *(uint *)(iVar7 + 0xc4);
      *(uint *)(iVar7 + 0xd0) =
           *(int *)(iVar7 + 0xd0) + *(int *)(iVar7 + 200) +
           (uint)CARRY4(uVar2,*(uint *)(iVar7 + 0xc4));
      if (*(code **)(iVar7 + 0xd4) != (code *)0x0) {
        (**(code **)(iVar7 + 0xd4))(*(undefined4 *)(iVar7 + 0xdc));
      }
      if (*(int *)(iVar7 + 0xa0) != 0) {
        iVar1 = FUN_0203b424(3);
        uVar3 = (**(code **)(*(int *)(*(int *)(iVar1 + 0x88) + 4) + 0x948))();
        FUN_02152ab8(*(undefined4 *)(iVar7 + 0xa0),uVar3,0x100);
      }
      goto LAB_021527e0;
    }
    FUN_02152a88(*(undefined4 *)(iVar7 + 0x9c));
    uVar2 = *(uint *)(iVar7 + 0xcc);
    *(uint *)(iVar7 + 0xcc) = uVar2 + *(uint *)(iVar7 + 0xc4);
    *(uint *)(iVar7 + 0xd0) =
         *(int *)(iVar7 + 0xd0) + *(int *)(iVar7 + 200) +
         (uint)CARRY4(uVar2,*(uint *)(iVar7 + 0xc4));
    if (*(int *)(iVar7 + 0xa0) != 0) {
      FUN_02152a88();
    }
    if (*(code **)(iVar7 + 0xd4) != (code *)0x0) {
      (**(code **)(iVar7 + 0xd4))(*(undefined4 *)(iVar7 + 0xdc));
    }
  } while( true );
}

