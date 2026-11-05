
/* JUS-GAME JGalaxyClearList::JGalaxyClearList_Create [source-string]
   __FILE__="JGalaxyClearList.cpp" __FUNCTION__="JGalaxyClearList_Create" lines=[98, 697, 1219]
   passed to 3 source-location call(s); header inlines: ALControllerImp.h:Create, ALNodeImp.h:Create
    */

int * JGalaxyClearList::JGalaxyClearList_Create(int param_1,uint param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 auStack_6c [12];
  undefined1 auStack_60 [12];
  undefined4 local_54 [5];
  int local_40;
  undefined1 auStack_3c [4];
  int local_38;
  int local_30;
  int local_2c;
  
  piVar2 = (int *)jus_AllocDebug(0x6c,s_JGalaxyClearList_cpp_0216bc30,
                                 s_JGalaxyClearList_Create_0216bbf4,0x62);
  FUN_020517fc(piVar2,0,0x6c);
  piVar2[0x1a] = piVar2[0x1a] & 0xfffffffeU | param_2 & 1;
  piVar2[0x19] = param_1;
  iVar3 = ClearlstData::ClearlstData_Create();
  piVar2[0x11] = iVar3;
  iVar3 = FUN_0203b424(1);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),1);
  iVar3 = FUN_0203b424(1);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),4);
  iVar3 = FUN_0203b424(1);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),0x40,0x20);
  iVar3 = FUN_0203b424(1);
  piVar4 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x90))(piVar4,0x8000);
  iVar3 = FUN_0203b424(1);
  local_78 = 0x1000;
  piVar4 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x10))(piVar4,&local_78);
  iVar3 = FUN_0203b424(1);
  *(undefined1 *)(*(int *)(*(int *)(iVar3 + 0x88) + 4) + 0x956) = 1;
  iVar3 = FUN_0203b424(2);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),1);
  iVar3 = FUN_0203b424(2);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),4);
  iVar3 = FUN_0203b424(2);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),0x40,0x20);
  iVar3 = FUN_0203b424(2);
  piVar4 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x90))(piVar4,0x4000);
  iVar3 = FUN_0203b424(2);
  local_74 = 0x2000;
  piVar4 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x10))(piVar4,&local_74);
  iVar3 = FUN_0203b424(3);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),1);
  iVar3 = FUN_0203b424(3);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),4);
  iVar3 = FUN_0203b424(3);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),0x20,0x20);
  iVar3 = FUN_0203b424(3);
  piVar4 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x90))(piVar4,0x8000);
  iVar3 = FUN_0203b424(3);
  local_70 = 0x3000;
  piVar4 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x10))(piVar4,&local_70);
  iVar3 = FUN_0203b424(3);
  piVar4 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x94))(piVar4,1);
  piVar4 = (int *)FUN_02033410(s_jgalaxy_jgalaxy_bin_0216bc48,0,0);
  if (piVar4[7] == 0) {
    (**(code **)(*piVar4 + 0x10))();
  }
  iVar12 = piVar4[7];
  iVar3 = (**(code **)(**(int **)(iVar12 + 4) + 0x2c))(*(int **)(iVar12 + 4),0);
  iVar5 = (**(code **)(**(int **)(iVar12 + 4) + 0x2c))
                    (*(int **)(iVar12 + 4),*(undefined4 *)(iVar3 + 0xc));
  iVar6 = (**(code **)(**(int **)(iVar12 + 4) + 0x2c))
                    (*(int **)(iVar12 + 4),*(undefined4 *)(iVar3 + 0x10));
  iVar3 = (**(code **)(**(int **)(iVar12 + 4) + 0x2c))
                    (*(int **)(iVar12 + 4),*(undefined4 *)(iVar3 + 0x14));
  iVar9 = piVar2[0x19];
  iVar3 = iVar9 * 0x88 + iVar3;
  uVar11 = (uint)*(short *)(iVar3 + 0x74);
  bVar13 = uVar11 != 0xffffffff;
  if (bVar13) {
    uVar11 = (uint)*(short *)(iVar3 + 0x76);
  }
  if ((bVar13 && uVar11 != 0xffffffff) &&
     ((*(uint *)(&DAT_020b0bac + (uVar11 >> 5) * 4) & 1 << (uVar11 & 0x1f)) != 0)) {
    (&DAT_020b4084)[iVar9] = (&DAT_020b4084)[iVar9] | 0x20;
    FUN_02073114(iVar9 + 0x3dcc);
  }
  piVar2[0x1a] = piVar2[0x1a] & 0xfffffffbU | (DAT_020afee4 & 1) << 2;
  piVar2[0x18] = 0;
  for (uVar11 = 0; (int)uVar11 < (int)(uint)*(byte *)(iVar3 + 0xb); uVar11 = uVar11 + 1) {
    iVar9 = uVar11 * 0x14 + iVar3;
    piVar2[0x1a] = piVar2[0x1a] & 0xfffffe07U |
                   ((uint)(((uint)(byte)(&DAT_020b4084)[piVar2[0x19]] & 1 << (uVar11 & 0xff)) != 0)
                    << (uVar11 & 0xff) & 0x3f | (piVar2[0x1a] & 0x1ffU) >> 3) << 3;
    piVar2[0x1a] = piVar2[0x1a] & 0xffe07fffU |
                   ((uint)(*(short *)(iVar9 + 0x12) != -1) << (uVar11 & 0xff) & 0x3f |
                   (piVar2[0x1a] & 0x1fffffU) >> 0xf) << 0xf;
    if (*(short *)(iVar9 + 0x10) == -1) {
      puVar7 = &DAT_0216bc5c;
    }
    else {
      piVar2[0x18] = piVar2[0x18] + 1;
      puVar7 = (undefined *)FUN_02075284(piVar2[0x11],(int)*(short *)(iVar9 + 0x10));
    }
    piVar2[uVar11 + 0x12] = (int)puVar7;
  }
  if (5 < *(byte *)(iVar3 + 0xb)) {
    if ((((&DAT_020b4084)[piVar2[0x19]] & 0x20) == 0) && ((DAT_020b0b90 & 8) == 0)) {
      if ((((piVar2[0x1a] & 1U) == 0) || (DAT_020aff27 < '\x05')) || ((DAT_020aff28 & 0x20) == 0)) {
        piVar2[0x1a] = piVar2[0x1a] & 0xfffffffd;
        if (5 < piVar2[0x18]) {
          piVar2[0x18] = piVar2[0x18] + -1;
        }
      }
      else {
        piVar2[0x1a] = piVar2[0x1a] | 2;
      }
    }
    else {
      piVar2[0x1a] = piVar2[0x1a] | 2;
    }
  }
  uVar11 = 0;
  piVar2[0x1a] = piVar2[0x1a] & 0xffff81ffU | ((piVar2[0x1a] & 0x1ffU) >> 3) << 9;
  do {
    if (piVar2[0x18] <= (int)uVar11) {
LAB_0214ebfc:
      uVar11 = piVar2[0x1a];
      if ((uVar11 & 3) >> 1 != 0) {
        if ((((uVar11 & 0x1ff) >> 3 & 0x20) == 0) &&
           (bVar1 = *(byte *)((uint)*(byte *)(iVar6 + (uint)*(byte *)(iVar3 + 10) * 0x40 + 0x2c) *
                              0x48 + iVar5 + 0x42),
           (*(uint *)(&DAT_020b0d28 + (uint)(bVar1 >> 5) * 4) & 1 << (bVar1 & 0x1f)) == 0)) {
          piVar2[0x1a] = uVar11 & 0xffff81ff | ((uVar11 & 0x7fff) >> 9 & 0xffffffdf) << 9;
        }
        else {
          piVar2[0x1a] = piVar2[0x1a] & 0xffff81ffU | ((piVar2[0x1a] & 0x7fffU) >> 9 | 0x20) << 9;
        }
      }
      piVar2[0x10] = iVar3;
      (**(code **)(**(int **)(iVar12 + 4) + 0xc))();
      iVar3 = jus_AllocDebug(0x78,s_ALNodeImp_h_0216bbd4,s_Create_0216bbc4,0x4c3);
      if (iVar3 != 0) {
        jus_Class_0209c0b4::jus_Class_0209c0b4(iVar3,FUN_02024a30,1);
      }
      iVar3 = FUN_0214d37c();
      *piVar2 = iVar3;
      FUN_02023940(*(undefined4 *)(iVar3 + 4));
      piVar4 = *(int **)(*(int *)(*piVar2 + 4) + 0x68);
      (**(code **)(*piVar4 + 0xac))(piVar4,0);
      FUN_0214f714(&local_b4,*piVar2,s_Position_0216bc60);
      local_ac = 0xfff00000;
      FUN_0214f764(*piVar2,&local_ac);
      FUN_02023c60(*(undefined4 *)(*piVar2 + 4),local_b4,0,local_b0);
      local_a8 = 0;
      FUN_0214f764(*piVar2,&local_a8);
      FUN_02023c60(*(undefined4 *)(*piVar2 + 4),local_b4,8,local_b0);
      FUN_02023c80(*(undefined4 *)(*piVar2 + 4),local_b4,0x494c,local_b0);
      local_a4 = 0xfff00000;
      FUN_0214f764(*piVar2,&local_a4);
      (**(code **)(**(int **)(*(int *)(*piVar2 + 4) + 0x68) + 0x70))();
      iVar3 = FUN_020101f4(s_jgalaxy_victory_obj_aar_0216bc6c,0);
      piVar2[0xf] = iVar3;
      iVar3 = FUN_0203b424(3);
      iVar3 = FUN_0214f988(s_info_bg_0216bc84,*(undefined4 *)(iVar3 + 0x88));
      local_a0 = 0;
      local_9c = 0xfff00000;
      local_98 = 0x100000;
      FUN_0214dc68(auStack_6c,&local_98,&local_9c,&local_a0);
      local_94 = 0;
      local_90 = 0;
      local_8c = 0;
      FUN_0214dc68(auStack_60,&local_8c,&local_90,&local_94);
      FUN_0214f714(&local_88,iVar3,s_Position_0216bc60);
      iVar5 = jus_AllocDebug(0x4c,s_ALControllerImp_h_0216bbe0,s_Create_0216bbcc,0x2b9);
      piVar4 = (int *)0x0;
      if (iVar5 != 0) {
        piVar4 = (int *)jus_TagIPCT::jus_TagIPCT
                                  (iVar5,0,local_88,local_84,0x494c,auStack_60,auStack_6c,0x400,2);
      }
      if (piVar4[6] == 0) {
        (**(code **)(*piVar4 + 0x14))();
      }
      FUN_02020f38(iVar3,piVar4[6]);
      piVar2[1] = iVar3;
      if ((piVar2[0x1a] & 3U) >> 1 == 0) {
        iVar3 = FUN_0203b424(2);
        iVar3 = FUN_0214f988(s_jgalaxy_victory00_0216bcbc,*(undefined4 *)(iVar3 + 0x88));
      }
      else {
        iVar3 = FUN_0203b424(2);
        iVar3 = FUN_0214f9e8(s_jgalaxy_victory01_atm_0216bc8c,s_jgalaxy_victory00_dig_0216bca4,
                             *(undefined4 *)(iVar3 + 0x88));
      }
      piVar2[2] = iVar3;
      FUN_0214f7c0(iVar3,*piVar2);
      for (iVar5 = piVar2[0x18] * 3 + 4; iVar5 < 0x13; iVar5 = iVar5 + 1) {
        iVar6 = 0;
        do {
          piVar4 = *(int **)(*(int *)(iVar3 + 4) + 100);
          (**(code **)(*piVar4 + 0x88))(piVar4,iVar6,iVar5,0xb);
          iVar6 = iVar6 + 1;
        } while (iVar6 < 0x20);
      }
      iVar3 = FUN_0203b424(1);
      FUN_0214f7f8(*(undefined4 *)(iVar3 + 0x88));
      iVar3 = FUN_0203687c(0x20,0x20);
      (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
      FUN_0214e688(*piVar2,iVar3);
      FUN_0214f7c0(iVar3,*piVar2);
      FUN_0214f834();
      iVar3 = FUN_0203b3f4();
      uVar8 = FUN_0214f8b0(0x12000,0x12000,*(undefined4 *)(iVar3 + 0x88),0,0x61);
      FUN_0214f864(uVar8,&DAT_0216bc0c);
      FUN_0214e688(*piVar2,uVar8);
      FUN_0214f894(auStack_3c,&DAT_0216bc18);
      for (uVar11 = 0; (int)uVar11 < piVar2[0x18]; uVar11 = uVar11 + 1) {
        if (((piVar2[0x1a] & 0x1fffffU) >> 0xf & 1 << (uVar11 & 0xff)) == 0) {
          iVar3 = FUN_0203b3f4();
          uVar8 = FUN_0214f8b0(0x12002,0x12000,*(undefined4 *)(iVar3 + 0x88),*piVar2,100);
        }
        else {
          iVar3 = FUN_0203b3f4();
          uVar8 = FUN_0214f8b0(0x12001,0x12000,*(undefined4 *)(iVar3 + 0x88),*piVar2,100);
        }
        FUN_0214f864(uVar8,auStack_3c);
        local_54[uVar11] = uVar8;
        iVar3 = FUN_0203b3f4();
        iVar3 = FUN_0214f8b0(0x12003,0x12000,*(undefined4 *)(iVar3 + 0x88),*piVar2,0x62);
        FUN_0214f864(iVar3,auStack_3c);
        piVar2[uVar11 + 3] = iVar3;
        piVar4 = *(int **)(iVar3 + 4);
        if (((piVar2[0x1a] & 0x1ffU) >> 3 & 1 << (uVar11 & 0xff)) == 0) {
          (**(code **)(*piVar4 + 0xd8))(piVar4,0);
        }
        else {
          (**(code **)(*piVar4 + 0xd8))(piVar4,1);
        }
        local_38 = local_38 + 0x18000;
      }
      if ((5 < piVar2[0x18]) && ((piVar2[0x1a] & 3U) >> 1 == 0)) {
        (**(code **)(**(int **)(local_40 + 4) + 0xd8))(*(int **)(local_40 + 4),0);
        (**(code **)(**(int **)(piVar2[8] + 4) + 0xd8))(*(int **)(piVar2[8] + 4),0);
      }
      FUN_0214f894(&local_30,&DAT_0216bc24);
      iVar3 = piVar2[0x18];
      if (1 < iVar3) {
        iVar3 = 2;
      }
      iVar5 = FUN_0203b3f4();
      FUN_0214f7f8(*(undefined4 *)(iVar5 + 0x88));
      uVar11 = 0;
      if (0 < iVar3) {
        for (; (int)uVar11 < iVar3; uVar11 = uVar11 + 1) {
          func_0x021c5f88(s_font_jskfont_aft_0216bcd0,0,0);
          iVar5 = FUN_0214d37c();
          piVar4 = *(int **)(*(int *)(iVar5 + 4) + 100);
          (**(code **)(*piVar4 + 0xa4))(piVar4,1);
          piVar4 = *(int **)(*(int *)(iVar5 + 4) + 100);
          (**(code **)(*piVar4 + 0xa8))(piVar4,6);
          (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),1);
          iVar6 = *(int *)(*(int *)(iVar5 + 4) + 0x50);
          *(int *)(iVar6 + 0xc) = local_30;
          *(int *)(iVar6 + 0x10) = local_2c + 0x2000;
          FUN_0214f784(iVar6,1);
          local_7c = 0x63000;
          FUN_0214e6c0(iVar5,&local_7c);
          FUN_0214f7c0(iVar5,*piVar2);
          if ((1 << (uVar11 & 0xff) & (piVar2[0x1a] & 0x7fffU) >> 9) == 0) {
            piVar4 = *(int **)(*(int *)(iVar5 + 4) + 100);
            (**(code **)(*piVar4 + 0x68))(piVar4,&DAT_0216bce4);
          }
          else {
            piVar4 = *(int **)(*(int *)(iVar5 + 4) + 100);
            (**(code **)(*piVar4 + 0x68))(piVar4,piVar2[uVar11 + 0x12]);
          }
          FUN_0214e688(*piVar2,iVar5);
          local_2c = local_2c + 0x18000;
          piVar2[uVar11 + 9] = iVar5;
        }
      }
      FUN_0214f834();
      iVar3 = FUN_0203b424(1);
      FUN_0214f7f8(*(undefined4 *)(iVar3 + 0x88));
      for (uVar11 = 2; (int)uVar11 < piVar2[0x18]; uVar11 = uVar11 + 1) {
        iVar5 = func_0x021ca3a4(0xe0,0x18,s_font_jskfont_aft_0216bcd0,0,0);
        piVar4 = *(int **)(*(int *)(iVar5 + 4) + 100);
        (**(code **)(*piVar4 + 0xa4))(piVar4,1);
        piVar4 = *(int **)(*(int *)(iVar5 + 4) + 100);
        (**(code **)(*piVar4 + 0xa8))(piVar4,6);
        (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),1);
        piVar4 = *(int **)(*(int *)(iVar5 + 4) + 100);
        iVar6 = local_30 + ((uint)(local_30 >> 0xb) >> 0x14);
        iVar3 = iVar6 >> 0x1f;
        (**(code **)(*piVar4 + 0x80))
                  (piVar4,((uint)((iVar6 >> 0xc) * 0x20000000 + iVar3) >> 0x1d | iVar3 << 3) - iVar3
                   ,2);
        FUN_0214f864(iVar5,&local_30);
        local_80 = 0x63000;
        FUN_0214e6c0(iVar5,&local_80);
        FUN_0214f7c0(iVar5,*piVar2);
        if ((1 << (uVar11 & 0xff) & (piVar2[0x1a] & 0x7fffU) >> 9) == 0) {
          piVar4 = *(int **)(*(int *)(iVar5 + 4) + 100);
          (**(code **)(*piVar4 + 0x68))(piVar4,&DAT_0216bce4);
        }
        else {
          piVar4 = *(int **)(*(int *)(iVar5 + 4) + 100);
          (**(code **)(*piVar4 + 0x68))(piVar4,piVar2[uVar11 + 0x12]);
        }
        FUN_0214e688(*piVar2,iVar5);
        local_2c = local_2c + 0x18000;
        piVar2[uVar11 + 9] = iVar5;
      }
      FUN_0214f834();
      return piVar2;
    }
    uVar10 = piVar2[0x1a];
    if (((uVar10 & 0x1ff) >> 3 & 1 << (uVar11 & 0xff)) == 0) {
      piVar2[0x1a] = uVar10 & 0xffff81ff |
                     ((uVar10 & 0x7fff) >> 9 | 1 << (uVar11 & 0xff) & 0x3fU) << 9;
      goto LAB_0214ebfc;
    }
    uVar11 = uVar11 + 1;
  } while( true );
}

