
/* JUS-GAME BattleWindow::Battle_WindowCreate [source-string] __FILE__="BattleWindow.cpp"
   __FUNCTION__="Battle_WindowCreate" lines=[87] passed to 1 source-location call(s) */

int * BattleWindow::Battle_WindowCreate(undefined1 param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 auStack_30 [11];
  undefined1 auStack_25 [17];
  
  piVar2 = (int *)jus_AllocDebug(0xd4,s_BattleWindow_cpp_02171f7c,s_Battle_WindowCreate_02171f68,
                                 0x57);
  FUN_020517fc(piVar2,0,0xd4);
  *(undefined1 *)((int)piVar2 + 0xc9) = param_1;
  piVar2[0x26] = param_2;
  piVar2[0x25] = param_3;
  *piVar2 = param_4;
  iVar3 = FUN_02026f94();
  piVar2[3] = iVar3;
  local_34 = 0x97000;
  (**(code **)(**(int **)(iVar3 + 4) + 0xa0))(*(int **)(iVar3 + 4),&local_34);
  (**(code **)(**(int **)(piVar2[3] + 4) + 0x24))(*(int **)(piVar2[3] + 4),piVar2);
  (**(code **)(**(int **)(piVar2[3] + 4) + 0x94))(*(int **)(piVar2[3] + 4),0x100000);
  piVar2[0x27] = 0x1000;
  piVar2[0x28] = -2;
  piVar2[0x2a] = -2;
  piVar2[0x2b] = -2;
  *(undefined2 *)(piVar2 + 0x2c) = 0xfffe;
  *(undefined2 *)((int)piVar2 + 0xba) = 0xfffe;
  *(undefined2 *)(piVar2 + 0x2f) = 0xfffe;
  *(undefined2 *)((int)piVar2 + 0xbe) = 0xfffe;
  *(undefined2 *)(piVar2 + 0x30) = 0xfffe;
  *(undefined2 *)((int)piVar2 + 0xb2) = 0xfffe;
  *(undefined2 *)(piVar2 + 0x2d) = 0xfffe;
  *(undefined2 *)((int)piVar2 + 0xb6) = 0xfffe;
  *(undefined2 *)(piVar2 + 0x2e) = 0xfffe;
  *(undefined1 *)((int)piVar2 + 0xc3) = 0xfe;
  *(undefined1 *)(piVar2 + 0x31) = 0xfe;
  *(undefined1 *)((int)piVar2 + 0xc5) = 0xfe;
  iVar3 = FUN_02020d90();
  piVar2[4] = iVar3;
  local_4c = 0xfffd8000;
  local_50 = 0;
  FUN_021519d0(piVar2[4],&local_50,&local_4c);
  (**(code **)(**(int **)(piVar2[4] + 4) + 0xd8))(*(int **)(piVar2[4] + 4),1);
  DAT_02093c08 = DAT_02093c08 + -1;
  (&DAT_020a16d0)[DAT_02093c08] = DAT_020a0dd0;
  iVar3 = FUN_0203b404();
  DAT_020a0dd0 = *(undefined4 *)(*(int *)(iVar3 + 0x88) + 4);
  *(undefined1 *)((int)piVar2 + 0xc2) = 0;
  puVar7 = *(undefined4 **)(*piVar2 + 0x558);
  piVar4 = (int *)FUN_020101f4(s_battle_ChrWin_aar_02171f90);
  for (; puVar7 != (undefined4 *)0x0; puVar7 = (undefined4 *)*puVar7) {
    if (*(char *)(puVar7 + 0x10) == '\0') {
      iVar3 = FUN_02078cb8(puVar7[0xd]);
      if (iVar3 == 0) {
        thunk_FUN_0207400c(auStack_30,s_battle_chr_________aar_02171fc0);
        iVar3 = 0x5f1000;
      }
      else {
        thunk_FUN_0207400c(auStack_30,s_battle_chr_________b_aar_02171fa4);
        iVar3 = 0x5f2000;
      }
      thunk_FUN_02074258(auStack_25,
                         *(undefined4 *)(&DAT_020924b0 + (uint)*(byte *)((int)puVar7 + 0x41) * 8));
      piVar5 = (int *)FUN_020101f4(auStack_30,0);
      iVar3 = FUN_021552e4(iVar3 + (uint)*(byte *)((int)puVar7 + 0x41),
                           iVar3 + (uint)*(byte *)((int)puVar7 + 0x41),0,0,0x49,0x1000);
      piVar2[*(char *)((int)piVar2 + 0xc2) + 5] = iVar3;
      (**(code **)(**(int **)(piVar2[*(char *)((int)piVar2 + 0xc2) + 5] + 4) + 0xd8))
                (*(int **)(piVar2[*(char *)((int)piVar2 + 0xc2) + 5] + 4),0);
      FUN_021544c8(piVar2[*(char *)((int)piVar2 + 0xc2) + 5],piVar2[4]);
      (**(code **)(*piVar5 + 0xc))();
      *(char *)((int)piVar2 + 0xc2) = *(char *)((int)piVar2 + 0xc2) + '\x01';
      if ('\x03' < *(char *)((int)piVar2 + 0xc2)) break;
    }
  }
  (**(code **)(*piVar4 + 0xc))();
  (**(code **)(**(int **)(piVar2[5] + 4) + 0xd8))(*(int **)(piVar2[5] + 4),1);
  piVar4 = (int *)FUN_020101f4(s_battle_win_bt00_aar_02171fd8,0);
  puVar7 = &DAT_02171070;
  piVar5 = piVar2 + 9;
  iVar3 = 5;
  do {
    iVar6 = FUN_021552e4(0x5f0000,*puVar7,(int)*(short *)(puVar7 + 1),0,0x48,0x1000);
    *piVar5 = iVar6;
    piVar5 = piVar5 + 1;
    FUN_021544c8(iVar6,piVar2[4]);
    iVar3 = iVar3 + -1;
    puVar7 = puVar7 + 2;
  } while (0 < iVar3);
  iVar3 = 0;
  do {
    iVar6 = FUN_02155354(0x5f0000,0x5f0001,0x13,1,0x48,0x1000);
    piVar2[iVar3 + 0x1e] = iVar6;
    FUN_021544c8(iVar6,piVar2[4]);
    iVar6 = FUN_02155354(0x5f0000,0,0x1b,10,0x48,0x1000);
    piVar2[iVar3 + 0x20] = iVar6;
    FUN_021544c8(piVar2[iVar3 + 0x20],piVar2[4]);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  iVar3 = FUN_021552e4(0x5f0000,0x5f0036,8,0xb8,0x48,0x1000);
  piVar2[0x1d] = iVar3;
  (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),0);
  FUN_020282f4(*(undefined4 *)(piVar2[0x1d] + 4));
  if (*(char *)((int)piVar2 + 0xc9) == '\x04') {
    local_48 = 0xfff80000;
    FUN_02153684(piVar2[9],&local_48);
    local_44 = 0xfff80000;
    FUN_02153684(piVar2[10],&local_44);
    for (iVar3 = 0; iVar3 < *(char *)((int)piVar2 + 0xc2); iVar3 = iVar3 + 1) {
      local_40 = 0xfff80000;
      FUN_02153684(piVar2[iVar3 + 5],&local_40);
    }
    iVar3 = 0;
    do {
      local_3c = 0xfff80000;
      FUN_02153684(piVar2[iVar3 + 0x1e],&local_3c);
      local_38 = 0xfff80000;
      FUN_02153684(piVar2[iVar3 + 0x20],&local_38);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
  }
  *(undefined1 *)(piVar2 + 0x32) = 0xc0;
  cVar1 = *(char *)((int)piVar2 + 0xc9);
  if (cVar1 == '\x01') {
    iVar3 = FUN_021552e4(0x5f0000,0x5f002b,0x80,0xe8,0x48,0x1000);
    piVar2[0xe] = iVar3;
    iVar3 = 0;
    do {
      iVar6 = FUN_021552e4(0x5f0000,0x5f002c,0,0,0x48,0x1000);
      piVar2[iVar3 + 0xf] = iVar6;
      FUN_021544c8(iVar6,piVar2[0xe]);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xe);
  }
  else if (cVar1 == '\x02') {
    iVar3 = FUN_021552e4(0x5f0000,0x5f002a,0xc0,0xe8,0x48,0x1000);
    piVar2[0xe] = iVar3;
    iVar3 = 0;
    do {
      iVar6 = FUN_021552e4(0x5f0000,0x5f002c,0,0,0x48,0x1000);
      piVar2[iVar3 + 0xf] = iVar6;
      FUN_021544c8(iVar6,piVar2[0xe]);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 6);
  }
  else if (cVar1 == '\x03') {
    *(undefined1 *)(piVar2 + 0x32) = 0xb8;
    iVar3 = FUN_021552e4(0x5f0000,0x5f001d,0x9c,0xe0,0x48,0x1000);
    piVar2[0xe] = iVar3;
    (**(code **)(**(int **)(piVar2[0xb] + 4) + 0xd8))(*(int **)(piVar2[0xb] + 4),0);
    (**(code **)(**(int **)(piVar2[0xc] + 4) + 0xd8))(*(int **)(piVar2[0xc] + 4),0);
    (**(code **)(**(int **)(piVar2[0xd] + 4) + 0xd8))(*(int **)(piVar2[0xd] + 4),0);
    iVar3 = 0;
    do {
      iVar6 = FUN_021552e4(0x5f0000,0x5f001e,0,0xfffffff0,0x48,0x1000);
      piVar2[iVar3 + 0xf] = iVar6;
      FUN_021544c8(iVar6,piVar2[0xe]);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 6);
    iVar3 = FUN_021552e4(0x5f0000,0x5f0029,0x27,0xfffffff0,0x48,0x1000);
    piVar2[0x15] = iVar3;
    iVar3 = FUN_021552e4(0x5f0000,0x5f0029,0x4a,0xfffffff0,0x48,0x1000);
    piVar2[0x16] = iVar3;
    FUN_021544c8(piVar2[0x15],piVar2[0xe]);
    FUN_021544c8(piVar2[0x16],piVar2[0xe]);
  }
  (**(code **)(*piVar4 + 0xc))();
  iVar3 = DAT_02093c08;
  DAT_02093c08 = DAT_02093c08 + 1;
  DAT_020a0dd0 = (&DAT_020a16d0)[iVar3];
  return piVar2;
}

