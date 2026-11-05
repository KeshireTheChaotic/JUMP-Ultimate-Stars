
/* JUS-GAME SelectStandbyBar::SelectStandbyBar_Create [source-string]
   __FILE__="SelectStandbyBar.cpp" __FUNCTION__="SelectStandbyBar_Create" lines=[113, 1219] passed
   to 2 source-location call(s); header inlines: ALNodeImp.h:Create */

undefined4 *
SelectStandbyBar::SelectStandbyBar_Create
          (undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  uStack_28 = param_4;
  puVar2 = (undefined4 *)
           thunk_FUN_0201a228(0x88,s_SelectStandbyBar_cpp_0216d654,
                              s_SelectStandbyBar_Create_0216d5d0,0x71);
  FUN_020517fc(puVar2,0,0x88);
  puVar2[0xd] = param_1;
  puVar2[0x1b] = param_2;
  *(undefined1 *)((int)puVar2 + 0x85) = param_3;
  uVar8 = FUN_02054b44();
  *(undefined8 *)(puVar2 + 0x17) = uVar8;
  iVar3 = FUN_020876f8();
  if (iVar3 == 0) {
    uVar1 = 0x5a;
  }
  else {
    uVar1 = 0x1e;
  }
  *(undefined1 *)(puVar2 + 0x21) = uVar1;
  iVar3 = FUN_02026f94();
  puVar2[3] = iVar3;
  (**(code **)(**(int **)(iVar3 + 4) + 0x24))(*(int **)(iVar3 + 4),puVar2);
  FUN_02027834(*(undefined4 *)(puVar2[3] + 4),8,FUN_02165ccc);
  FUN_02086cac(puVar2[3]);
  if (*(char *)((int)puVar2 + 0x85) != '\x02') {
    uVar4 = FUN_020101f4(s_deckselect_deckselect_aar_0216d66c,0);
    *puVar2 = uVar4;
    uVar4 = FUN_020101f4(s_deckselect_standby_c_obj_aar_0216d688,0);
    puVar2[1] = uVar4;
    iVar3 = thunk_FUN_0201a228(0x78,s_ALNodeImp_h_0216bbd4,s_Create_0216d5c8,0x4c3);
    if (iVar3 != 0) {
      jus_TagNDGR_0209c0b4::jus_TagNDGR_0209c0b4(iVar3,FUN_02024a30,1);
    }
    iVar3 = FUN_0214d37c();
    puVar2[2] = iVar3;
    (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
    local_40 = puVar2[0x1b] << 0xc;
    FUN_0214e6c0(puVar2[2],&local_40);
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    if (*(char *)((int)puVar2 + 0x85) == '\x01') {
      FUN_0215e750(&local_34,&DAT_0216d618);
    }
    else {
      FUN_0215e750(&local_34,&DAT_0216d60c);
    }
    FUN_02023940(*(undefined4 *)(puVar2[2] + 4));
    piVar6 = *(int **)(puVar2[2] + 4);
    uVar4 = FUN_020326b0(s_Position_0216d6a8);
    uVar4 = (**(code **)(*piVar6 + 0x40))(piVar6,s_Position_0216d6a8,&local_54,uVar4);
    FUN_0202c4a4(&local_3c,uVar4,local_54);
    local_48 = local_30;
    local_44 = local_34 + -0x100000;
    FUN_021511c8(puVar2[2],&local_44,&local_48);
    FUN_02023c60(*(undefined4 *)(puVar2[2] + 4),local_3c,0,local_38);
    FUN_0214f864(puVar2[2],&local_34);
    FUN_02023c60(*(undefined4 *)(puVar2[2] + 4),local_3c,0x10,local_38);
    FUN_02023c80(*(undefined4 *)(puVar2[2] + 4),local_3c,0x494c,local_38);
    piVar6 = *(int **)(*(int *)(puVar2[2] + 4) + 0x68);
    (**(code **)(*piVar6 + 0xac))(piVar6,0);
    local_50 = local_30;
    local_4c = local_34 + -0x100000;
    FUN_021511c8(puVar2[2],&local_4c,&local_50);
    (**(code **)(**(int **)(*(int *)(puVar2[2] + 4) + 0x68) + 0x6c))();
    uVar4 = FUN_021656b0(0x886000,puVar2[0xd],puVar2[2],puVar2[0x1b],&DAT_02093c8c);
    iVar3 = 0;
    iVar7 = 0;
    puVar2[8] = uVar4;
    do {
      iVar5 = FUN_02088310(iVar7);
      if (iVar5 == 0) {
        uVar4 = FUN_021656b0(iVar7 + 0x886017,puVar2[0xd],puVar2[2],puVar2[0x1b] + -1,
                             &DAT_0216d5e8 + iVar3 * 0xc);
      }
      else {
        uVar4 = FUN_021656b0(iVar7 + 0x88601b,puVar2[0xd],puVar2[2],puVar2[0x1b] + -1,
                             &DAT_0216d5e8 + iVar3 * 0xc);
      }
      puVar2[iVar7 + 4] = uVar4;
      if ((iVar7 < DAT_020afe94) && (iVar7 != DAT_020afe98)) {
        iVar3 = iVar3 + 1;
      }
      else {
        (**(code **)(**(int **)(puVar2[iVar7 + 4] + 4) + 0xd8))(*(int **)(puVar2[iVar7 + 4] + 4),0);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 4);
    if (*(char *)((int)puVar2 + 0x85) == '\x01') {
      iVar3 = 0;
      do {
        uVar4 = FUN_021656b0(0x886003,puVar2[0xd],puVar2[2],puVar2[0x1b] + -1,
                             &DAT_0216d5e8 + (iVar3 + 5) * 0xc);
        iVar7 = iVar3 + 1;
        puVar2[iVar3 + 9] = uVar4;
        iVar3 = iVar7;
      } while (iVar7 < 4);
    }
    FUN_021657f0(puVar2);
    FUN_02028384(*(undefined4 *)(puVar2[3] + 4),FUN_02165a20);
  }
  if (*(char *)((int)puVar2 + 0x85) == '\x01') {
    *(undefined1 *)(puVar2 + 0x1c) = 1;
    FUN_02165ba4(*(undefined1 *)(puVar2 + 0x21),puVar2[9],puVar2[10],0,0x886003);
    FUN_02165ba4(0,puVar2[0xb],puVar2[0xc],1,0x886003);
  }
  return puVar2;
}

