
/* JUS-GAME BattlePause::Battle_PauseCreate [source-string] __FILE__="BattlePause.cpp"
   __FUNCTION__="Battle_PauseCreate" lines=[64] passed to 1 source-location call(s) */

int * BattlePause::Battle_PauseCreate
                (undefined1 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  byte *pbVar8;
  int iVar9;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  uStack_28 = param_4;
  piVar3 = (int *)thunk_FUN_0201a228(0xa0,s_BattlePause_cpp_02171b28,s_Battle_PauseCreate_02171adc,
                                     0x40);
  FUN_020517fc(piVar3,0,0xa0);
  iVar4 = FUN_02026f94();
  piVar3[1] = iVar4;
  local_2c = 0x82000;
  (**(code **)(**(int **)(iVar4 + 4) + 0xa0))(*(int **)(iVar4 + 4),&local_2c);
  FUN_02028384(*(undefined4 *)(piVar3[1] + 4),FUN_0214f0d8);
  (**(code **)(**(int **)(piVar3[1] + 4) + 0x24))(*(int **)(piVar3[1] + 4),piVar3);
  (**(code **)(**(int **)(piVar3[1] + 4) + 0x94))(*(int **)(piVar3[1] + 4),0x400000);
  puVar5 = (undefined4 *)FUN_02028920(0);
  piVar3[2] = (int)puVar5;
  FUN_02029284(*puVar5);
  iVar4 = FUN_020208ec(0);
  piVar3[3] = iVar4;
  FUN_02020c44(*(undefined4 *)(iVar4 + 4));
  *(undefined1 *)((int)piVar3 + 0x99) = param_1;
  if (*(char *)((int)piVar3 + 0x99) != '\0') {
    DAT_02093c08 = DAT_02093c08 + -1;
    (&DAT_020a16d0)[DAT_02093c08] = DAT_020a0dd0;
    iVar4 = FUN_0203b3f4();
    DAT_020a0dd0 = *(undefined4 *)(*(int *)(iVar4 + 0x88) + 4);
    iVar4 = FUN_020101f4(s_battle_pause_aar_02171b38,0);
    piVar3[0x22] = iVar4;
    iVar4 = *(char *)((int)piVar3 + 0x99) * 0x20;
    pbVar8 = &DAT_02170dcc + iVar4;
    iVar6 = FUN_0214f100(0x52001a,0x1e,0x80,(&DAT_02170dcd)[iVar4]);
    piVar3[6] = iVar6;
    iVar6 = *(int *)(*(int *)(iVar6 + 4) + 100);
    piVar7 = *(int **)(iVar6 + 0x2c);
    if (piVar7 == (int *)0x0) {
      piVar7 = (int *)FUN_02036430(*(undefined4 *)(iVar6 + 0x20));
    }
    if (piVar7[6] == 0) {
      (**(code **)(*piVar7 + 0x10))();
    }
    iVar6 = CommonPaletteAnime::CommonPaletteAnime_Create(piVar7[6],0x11,7,5,0x80);
    *piVar3 = iVar6;
    *(undefined2 *)(iVar6 + 0x18) = 0x870;
    *(undefined2 *)(iVar6 + 0x16) = 0x8df;
    *(undefined1 *)(iVar6 + 0x1a) = 0x1e;
    *(undefined1 *)(iVar6 + 0x1c) = 3;
    *(undefined1 *)(iVar6 + 0x1b) = 1;
    FUN_0214f0dc(*piVar3,0);
    iVar6 = FUN_0214f100(0x520000,0x21,0x80,(byte)(&DAT_02170dcd)[iVar4] - 0x10);
    piVar3[0x13] = iVar6;
    iVar6 = FUN_0214f100(0x520017,0x21,0x80,
                         (uint)(byte)(&DAT_02170dcd)[iVar4] + (uint)*pbVar8 * 0x10);
    piVar3[0x14] = iVar6;
    *(byte *)(piVar3 + 0x26) = *pbVar8;
    for (iVar6 = 0; iVar6 < (int)(uint)*pbVar8; iVar6 = iVar6 + 1) {
      iVar9 = ((uint)(byte)(&DAT_02170dcd)[iVar4] + iVar6 * 0x10) * 0x10000;
      iVar1 = iVar9 >> 0x10;
      *(short *)((int)piVar3 + iVar6 * 2 + 0x8c) = (short)(char)((uint)iVar9 >> 0x10);
      iVar9 = FUN_0214f100(*(undefined4 *)(pbVar8 + iVar6 * 4 + 8),0x20,0x80,iVar1);
      piVar3[iVar6 + 7] = iVar9;
      bVar2 = pbVar8[iVar6 + 2];
      if (bVar2 == 2) {
        iVar9 = FUN_0214f100(0x520002,0x21,0x80,iVar1);
        piVar3[iVar6 + 0xd] = iVar9;
        iVar9 = FUN_0214f100(0x520019,0x1d,0x80,iVar1 + -9);
        piVar3[4] = iVar9;
        iVar9 = FUN_0214f100(*(char *)((int)piVar3 + 0x9b) + 0x520007,0x1f,0x80,iVar1);
        piVar3[0x15] = iVar9;
      }
      else if (bVar2 == 3) {
        iVar9 = FUN_0214f100(0x520002,0x21,0x80,iVar1);
        piVar3[iVar6 + 0xd] = iVar9;
        iVar9 = FUN_0214f100((char)piVar3[0x27] + 0x52000c,0x1f,0x80,iVar1);
        piVar3[0x16] = iVar9;
      }
      else if (bVar2 == 4) {
        iVar9 = FUN_0214f100(0x520002,0x21,0x80,iVar1);
        piVar3[iVar6 + 0xd] = iVar9;
        iVar9 = FUN_0214f100(0x520019,0x1d,0x80,iVar1 + -9);
        piVar3[5] = iVar9;
        iVar9 = FUN_0214f100(*(char *)((int)piVar3 + 0x9d) + 0x52000f,0x1f,0x80,iVar1);
        piVar3[0x17] = iVar9;
      }
      else {
        iVar9 = FUN_0214f100(0x520001,0x21,0x80,iVar1);
        piVar3[iVar6 + 0xd] = iVar9;
      }
    }
    iVar4 = FUN_0214f100(0x52001c,0x1f,0xbc,0xa8);
    piVar3[0x18] = iVar4;
    iVar4 = FUN_0214f100(0x52001b,0x1f,0x40,0xa8);
    piVar3[0x19] = iVar4;
    iVar4 = 0;
    do {
      iVar6 = FUN_0214f100(0x52001d,0x1e,iVar4 * 10 + 0xcc,0xa4);
      piVar3[iVar4 + 0x1a] = iVar6;
      iVar6 = FUN_0214f100(0x52001d,0x1e,iVar4 * 10 + 0x48,0xa4);
      iVar9 = iVar4 + 1;
      piVar3[iVar4 + 0x1e] = iVar6;
      iVar4 = iVar9;
    } while (iVar9 < 4);
    if (*(char *)((int)piVar3 + 0x99) != '\0') {
      FUN_0214f35c(piVar3,0);
    }
    DAT_020a0dd0 = (&DAT_020a16d0)[DAT_02093c08];
    DAT_02093c08 = DAT_02093c08 + 1;
  }
  *(undefined1 *)((int)piVar3 + 0x9d) = DAT_020aff4a;
  return piVar3;
}

