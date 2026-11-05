
void FUN_0215e1b0(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined4 local_3c;
  int local_38 [5];
  
  iVar8 = param_1 + 0x74;
  iVar7 = 0;
  *(undefined1 *)(param_1 + 0x9c) = param_2;
  *(undefined1 *)(param_1 + 0x9d) = 0;
  *(undefined1 *)(param_1 + 0x9e) = 0;
  local_38[4] = param_4;
  do {
    iVar6 = *(int *)(iVar8 + iVar7 * 4 + 8);
    if (iVar6 != 0) {
      piVar3 = *(int **)(*(int *)(param_1 + 0x28) + 4);
      (**(code **)(*piVar3 + 0xb8))(piVar3,*(undefined4 *)(iVar6 + 4));
      (**(code **)(**(int **)(iVar8 + iVar7 * 4 + 8) + 8))();
      *(undefined4 *)(iVar8 + iVar7 * 4 + 8) = 0;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 8);
  if (*(char *)(param_1 + 0xb4) != '\0') {
    (*DAT_020a0e18)();
  }
  if (*(int *)(&DAT_02168acc + *(char *)(param_1 + 0x9c) * 8) == 1) {
    FUN_0215e634(param_1);
    FUN_0215df54(param_1,0);
    if (*(int **)(param_1 + 0x4c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x4c) + 8))();
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
  }
  else if (*(int *)(&DAT_02168acc + *(char *)(param_1 + 0x9c) * 8) == 2) {
    iVar7 = *(int *)(param_1 + 0x14);
    puVar9 = &DAT_02168af8;
    iVar8 = 9;
    do {
      iVar6 = 3;
      puVar10 = puVar9;
      do {
        puVar9 = puVar10 + 1;
        piVar3 = *(int **)(*(int *)(iVar7 + 4) + 100);
        (**(code **)(*piVar3 + 0x60))(piVar3,iVar6,iVar8,*puVar10,0xb,0,0);
        iVar6 = iVar6 + 1;
        puVar10 = puVar9;
      } while (iVar6 < 0x1d);
      iVar8 = iVar8 + 1;
    } while (iVar8 < 0xc);
    FUN_0215df54(param_1,1);
    if (*(int **)(param_1 + 0x4c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x4c) + 8))();
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
  }
  else {
    FUN_0215e634(param_1);
    FUN_0215df54(param_1,0);
    if (*(int *)(param_1 + 0x4c) == 0) {
      local_38[2] = 0xe0;
      local_38[3] = 0x50;
      iVar7 = FUN_0203b3e4();
      iVar7 = FUN_02151538(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(iVar7 + 0x88),0x810000,1,
                           0x70,local_38 + 2);
      *(undefined1 *)(*(int *)(iVar7 + 4) + 0xaa) = 1;
      (**(code **)(**(int **)(iVar7 + 4) + 0x24))(*(int **)(iVar7 + 4),param_1);
      uVar4 = FUN_0214f3bc(0,&DAT_0216a4e8,&DAT_02093c8c);
      FUN_02020e98(iVar7,uVar4);
      FUN_02027834(*(undefined4 *)(iVar7 + 4),8,0x215de9d);
      func_0x021b4104(*(undefined4 *)(iVar7 + 4),*(undefined4 *)(iVar7 + 4),4);
      FUN_02023894(*(undefined4 *)(iVar7 + 4),0x810001,0);
      (**(code **)(**(int **)(*(int *)(iVar7 + 4) + 0x68) + 0x6c))();
      func_0x021b3f78(*(undefined4 *)(iVar7 + 4),0x810001);
      func_0x021b3fb0(*(undefined4 *)(iVar7 + 4),0x810001);
      func_0x021b3fc4(*(undefined4 *)(iVar7 + 4),0x810002);
      *(undefined4 *)(*(int *)(iVar7 + 4) + 0x124) = 8;
      *(int *)(param_1 + 0x4c) = iVar7;
    }
    piVar3 = *(int **)(*(int *)(param_1 + 0x4c) + 4);
    (**(code **)(*piVar3 + 0xd8))(piVar3,1);
    func_0x021b6214(*(undefined4 *)(*(int *)(param_1 + 0x4c) + 4),1);
  }
  iVar6 = param_1 + 0x74;
  cVar2 = *(char *)(param_1 + 0x9c);
  iVar7 = func_0x021bad40(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(&DAT_02168ac8 + cVar2 * 8)
                         );
  DAT_02093c08 = DAT_02093c08 + -1;
  (&DAT_020a16d0)[DAT_02093c08] = DAT_020a0dd0;
  iVar8 = FUN_0203b404();
  DAT_020a0dd0 = *(undefined4 *)(*(int *)(iVar8 + 0x88) + 4);
  iVar8 = 0;
  if (0 < iVar7) {
    for (; iVar8 < iVar7; iVar8 = iVar8 + 1) {
      uVar4 = func_0x021bad54(*(undefined4 *)(param_1 + 0x70),
                              *(undefined4 *)(&DAT_02168ac8 + cVar2 * 8),iVar8);
      func_0x021c5f88(s_font_jskfont_aft_0216a638,0,0);
      iVar5 = FUN_0214f340();
      *(int *)(iVar6 + iVar8 * 4 + 8) = iVar5;
      piVar3 = *(int **)(*(int *)(iVar5 + 4) + 100);
      (**(code **)(*piVar3 + 0xa8))(piVar3,6);
      piVar3 = *(int **)(*(int *)(*(int *)(iVar6 + iVar8 * 4 + 8) + 4) + 100);
      (**(code **)(*piVar3 + 0x68))(piVar3,uVar4);
      local_38[0] = (iVar8 * 0x10 + 0x29) * 0x1000;
      local_3c = 0x18000;
      FUN_0214f218(*(undefined4 *)(iVar6 + iVar8 * 4 + 8),&local_3c,local_38);
      local_38[1] = 0x20000;
      piVar3 = *(int **)(*(int *)(*(int *)(iVar6 + iVar8 * 4 + 8) + 4) + 100);
      (**(code **)(*piVar3 + 0x10))(piVar3,local_38 + 1);
      piVar3 = *(int **)(*(int *)(iVar6 + iVar8 * 4 + 8) + 4);
      (**(code **)(*piVar3 + 0xd8))(piVar3,1);
      piVar3 = *(int **)(*(int *)(param_1 + 0x28) + 4);
      (**(code **)(*piVar3 + 0xb4))(piVar3,*(undefined4 *)(*(int *)(iVar6 + iVar8 * 4 + 8) + 4));
      if (*(char *)(param_1 + 0xb4) != '\0') {
        (*DAT_020a0e18)();
      }
    }
  }
  puVar1 = &DAT_020a16d0 + DAT_02093c08;
  DAT_02093c08 = DAT_02093c08 + 1;
  DAT_020a0dd0 = *puVar1;
  return;
}

