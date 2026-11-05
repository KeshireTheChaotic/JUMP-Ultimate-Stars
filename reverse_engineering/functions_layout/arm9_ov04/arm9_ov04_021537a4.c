
void FUN_021537a4(int *param_1,char *param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  short extraout_r1;
  uint extraout_r1_00;
  int iVar5;
  char cVar6;
  int *piVar7;
  int iVar8;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  int local_60;
  undefined1 auStack_5c [34];
  short local_3a [9];
  undefined4 uStack_28;
  
  if (param_1 != (int *)0x0) {
    param_1[0xd] = (int)param_2;
    iVar5 = param_1[2];
    cVar6 = *param_2;
    piVar7 = *(int **)(iVar5 + 4);
    uStack_28 = param_4;
    (**(code **)(*(int *)piVar7[0x19] + 0x70))();
    (**(code **)(*piVar7 + 0xc4))();
    piVar7 = *(int **)(*(int *)(iVar5 + 4) + 100);
    (**(code **)(*piVar7 + 0x80))(piVar7,0,2);
    if (cVar6 == -1) {
      cVar6 = '\x15';
    }
    uVar2 = FUN_0214f2dc(cVar6);
    piVar7 = *(int **)(*(int *)(iVar5 + 4) + 100);
    (**(code **)(*piVar7 + 0x68))(piVar7,uVar2);
    pcVar3 = (char *)FUN_02153b58(param_2 + 4);
    iVar5 = FUN_02153bb4(param_1);
    if (pcVar3 != (char *)0x0) {
      iVar5 = (int)*pcVar3;
    }
    if (pcVar3 != (char *)0x0 && iVar5 != 0) {
      thunk_FUN_0207400c(auStack_5c,s_jquiz_img__02160e50);
      thunk_FUN_020741c4(auStack_5c,pcVar3);
      thunk_FUN_020741c4(auStack_5c,&DAT_02160e5c);
      iVar5 = FUN_02033bb8(auStack_5c);
      if (iVar5 == 0) {
        thunk_FUN_0207400c(auStack_5c,s_jquiz_img_dn00_dtx_02160e64);
      }
      iVar5 = FUN_0203b3e4();
      FUN_0214e7ec(*(undefined4 *)(iVar5 + 0x88));
      FUN_02032a1c(auStack_5c);
      iVar5 = FUN_0214e3ec();
      (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),1);
      local_6c = 0x32000;
      local_70 = 0x8000;
      FUN_0214e1b8(iVar5,&local_70,&local_6c);
      local_68 = 0x5f000;
      FUN_0214ea78(iVar5,&local_68);
      (**(code **)(**(int **)(*param_1 + 4) + 0xb4))
                (*(int **)(*param_1 + 4),*(undefined4 *)(iVar5 + 4));
      param_1[0xb] = iVar5;
      FUN_0214e850();
    }
    iVar5 = 0;
    if (param_1[0xb] == 0) {
      iVar4 = 0x10;
    }
    else {
      iVar4 = 0x70;
    }
    do {
      iVar8 = param_1[iVar5 + 3];
      piVar7 = *(int **)(iVar8 + 4);
      (**(code **)(*(int *)piVar7[0x19] + 0x70))();
      (**(code **)(*piVar7 + 0xc4))();
      local_64 = (iVar5 * 0x10 + 0x40) * 0x1000;
      local_60 = iVar4 << 0xc;
      FUN_0214e1b8(iVar8,&local_60,&local_64);
      uVar2 = FUN_02153b58(param_2 + iVar5 * 4 + 8);
      piVar7 = *(int **)(*(int *)(iVar8 + 4) + 100);
      (**(code **)(*piVar7 + 0x68))(piVar7,uVar2);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
    iVar5 = 0;
    do {
      iVar4 = param_1[iVar5 + 7];
      piVar7 = *(int **)(iVar4 + 4);
      (**(code **)(*(int *)piVar7[0x19] + 0x70))();
      (**(code **)(*piVar7 + 0xc4))();
      uVar2 = FUN_02153b58(param_2 + *(short *)(param_3 + iVar5 * 2) * 4 + 0x18);
      piVar7 = *(int **)(*(int *)(iVar4 + 4) + 100);
      (**(code **)(*piVar7 + 0x68))(piVar7,uVar2);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
    if (param_1[0xc] != 0) {
      FUN_020517fc(local_3a,0,0x10);
      iVar5 = FUN_0214f6e4();
      if (iVar5 == 0) {
        iVar5 = 0;
        do {
          iVar4 = iVar5 + 1;
          local_3a[iVar5] = 0x20;
          iVar5 = iVar4;
        } while (iVar4 < 4);
      }
      else {
        sVar1 = *(short *)(param_2 + 2);
        if (sVar1 == -1) {
          local_3a[0] = 0x2d;
          local_3a[1] = 0x2d;
          local_3a[2] = 0x2d;
        }
        else {
          local_3a[0] = FUN_0200d12c(sVar1,100);
          local_3a[0] = local_3a[0] + 0x30;
          FUN_0200d12c(sVar1,100);
          local_3a[1] = FUN_0200d12c(extraout_r1_00 & 0xffff,10);
          local_3a[1] = local_3a[1] + 0x30;
          FUN_0200d12c(extraout_r1_00 & 0xffff,10);
          local_3a[2] = extraout_r1 + 0x30;
        }
        local_3a[3] = 0x20;
      }
      iVar5 = 0;
      do {
        iVar4 = FUN_0214f6c4();
        if ((iVar4 == 0) || ((int)(uint)(byte)param_2[1] < 2 - iVar5)) {
          local_3a[iVar5 + 4] = 0x20;
        }
        else {
          local_3a[iVar5 + 4] = 0x2605;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 3);
      FUN_0214ece0(param_1[0xc],local_3a,7);
    }
  }
  return;
}

