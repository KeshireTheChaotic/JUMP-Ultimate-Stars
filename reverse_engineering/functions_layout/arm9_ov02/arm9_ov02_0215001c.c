
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME ALWidgetImp::Create [source-string-template] __FILE__="ALWidgetImp.h"
   __FUNCTION__="Create"; one of 3 instantiations in arm9_ov02 */

void ALWidgetImp::Create(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  undefined1 auStack_5c [60];
  
  iVar1 = thunk_FUN_0201a228(0xcc,s_ALWidget_inl_0215bfc0,&DAT_0215be88,0x1de);
  if (iVar1 != 0) {
    func_0x021af26c(iVar1,FUN_021506e4,FUN_0215074c,0);
  }
  piVar2 = (int *)FUN_0214ed94();
  iVar1 = thunk_FUN_0201a228(0xbc,&DAT_0215bfb0,&DAT_0215bea8,0x212);
  piVar3 = (int *)0x0;
  if (iVar1 != 0) {
    piVar3 = (int *)func_0x021af358(iVar1,FUN_021507b0,0);
  }
  if (piVar3[6] == 0) {
    (**(code **)(*piVar3 + 0x14))();
  }
  piVar3 = (int *)piVar3[6];
  iVar1 = piVar3[1];
  *(undefined4 *)(iVar1 + 0x94) = 0x14;
  *(undefined4 *)(iVar1 + 0x98) = 0x14;
  *(undefined4 *)(piVar3[1] + 0x9c) = 0x10;
  func_0x021b3b7c(0x30,0,piVar2,piVar3);
  iVar1 = (**(code **)(*(int *)piVar2[1] + 0xb0))((int *)piVar2[1],0x31305053);
  if (iVar1 != 0) {
    FUN_0214d498(iVar1);
  }
  uVar4 = FUN_0214f9b8();
  iVar1 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar4,0x31,6,5,0x80);
  *(undefined2 *)(iVar1 + 0x18) = 0;
  *(undefined2 *)(iVar1 + 0x16) = 0x8df;
  *(undefined1 *)(iVar1 + 0x1a) = 0x1e;
  *(undefined1 *)(iVar1 + 0x1c) = 1;
  *(undefined1 *)(iVar1 + 0x1b) = 1;
  *(int *)(param_1 + 0x78) = iVar1;
  (**(code **)(*piVar2 + 8))();
  (**(code **)(*piVar3 + 8))();
  _DAT_021d5154 = 0xffffffff;
  uVar4 = ALWidgetBaseImp::Create(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  FUN_021506bc(uVar4,0);
  func_0x021b7744(*(undefined4 *)(*(int *)(param_1 + 0x10) + 4),0);
  local_68 = 0x62000;
  FUN_0214d650(*(undefined4 *)(param_1 + 0x10),&local_68);
  uVar4 = ALWidgetBaseImp::Create(param_1,*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_021506bc(uVar4,0);
  local_6c = 0x4c000;
  FUN_0214d650(*(undefined4 *)(param_1 + 0x14),&local_6c);
  iVar1 = 0;
  do {
    iVar5 = FUN_0203b3f4();
    iVar5 = FUN_0214da4c(param_1,&DAT_0215c1d8 + iVar1 * 0x28,*(undefined4 *)(param_1 + 0x14),0x4c,
                         *(undefined4 *)(iVar5 + 0x88));
    *(int *)(auStack_5c + iVar1 * 4 + -8) = iVar5;
    iVar1 = iVar1 + 1;
    *(undefined1 *)(*(int *)(iVar5 + 4) + 0xaa) = 1;
    *(undefined1 *)(*(int *)(iVar5 + 4) + 0xb1) = 1;
  } while (iVar1 < 2);
  func_0x021b6760(*(undefined4 *)(local_64 + 4),4,FUN_02150910);
  iVar1 = local_60;
  func_0x021b6760(*(undefined4 *)(local_60 + 4),4,FUN_0215093c);
  func_0x021b77a8(*(undefined4 *)(local_64 + 4),0x20);
  func_0x021b77a8(*(undefined4 *)(iVar1 + 4),0x80);
  if ((DAT_020b0b90 & 0x10) == 0) {
    func_0x021b400c(*(undefined4 *)(iVar1 + 4),0x510013);
    (**(code **)(**(int **)(iVar1 + 4) + 0x148))(*(int **)(iVar1 + 4),8);
  }
  _DAT_021d5154 = 0x30;
  iVar1 = FUN_0203b3f4();
  FUN_0214d614(*(undefined4 *)(iVar1 + 0x88));
  uVar4 = _DAT_021d5154;
  uVar10 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 4);
  iVar1 = thunk_FUN_0201a228(0x17c,&DAT_0215bfd0,s_Create_0215be98,0xb5);
  if (iVar1 != 0) {
    func_0x021acb3c(iVar1,uVar10,uVar4,ALWidgetBaseImp::CreateDrawFunc);
  }
  iVar1 = FUN_0214d498();
  FUN_021506bc(iVar1,0);
  *(undefined1 *)(*(int *)(iVar1 + 4) + 0x164) = 0;
  local_78 = 0x34000;
  local_7c = 0x18000;
  FUN_0214d4c0(iVar1,&local_7c,&local_78);
  func_0x021b5900(*(undefined4 *)(iVar1 + 4),0xe2,0x60);
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x13c) = 1;
  func_0x021ad6cc(*(undefined4 *)(iVar1 + 4),0x18);
  (**(code **)(**(int **)(iVar1 + 4) + 0x24))(*(int **)(iVar1 + 4),param_1);
  func_0x021b65e8(*(undefined4 *)(iVar1 + 4),4,FUN_02150a3c);
  *(undefined1 *)(*(int *)(iVar1 + 4) + 0x140) = 1;
  *(undefined1 *)(*(int *)(iVar1 + 4) + 0x141) = 1;
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x144) = 0;
  func_0x021ac948(*(undefined4 *)(iVar1 + 4));
  (**(code **)(**(int **)(iVar1 + 4) + 0x1a8))(*(int **)(iVar1 + 4),1);
  *(undefined1 *)(*(int *)(iVar1 + 4) + 0x114) = 1;
  FUN_0214d678(iVar1,*(undefined4 *)(param_1 + 4));
  local_74 = 0x62000;
  uVar4 = FUN_0214d498(*(undefined4 *)(*(int *)(iVar1 + 4) + 0x160));
  FUN_0214d650(uVar4,&local_74);
  local_70 = 0x62000;
  FUN_0214d650(iVar1,&local_70);
  iVar5 = FUN_0214d498(*(undefined4 *)(*(int *)(iVar1 + 4) + 0x160));
  piVar3 = *(int **)(*(int *)(iVar5 + 4) + 100);
  (**(code **)(*piVar3 + 0xa8))(piVar3,6);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  uVar4 = 0;
  for (iVar5 = 0; iVar6 = *(int *)(param_1 + 0x88), iVar5 < (int)(uint)*(byte *)(iVar6 + 0x30);
      iVar5 = iVar5 + 1) {
    uVar8 = (uint)*(byte *)(iVar6 + iVar5 + 0x31);
    iVar11 = uVar8 * 0x88 + *(int *)(*(int *)(param_1 + 0x84) + 0x3c);
    if ((*(char *)(iVar11 + 4) == -1) ||
       (((&DAT_020b4084)[*(byte *)(iVar6 + *(char *)(iVar11 + 4) + 0x31)] & 1) != 0)) {
      uVar12 = (uint)*(byte *)(iVar11 + 0xb);
      uVar7 = 0;
      if (4 < uVar12) {
        uVar12 = 5;
      }
      for (uVar9 = 0; uVar9 < uVar12; uVar9 = uVar9 + 1) {
        if (((uint)(byte)(&DAT_020b4084)[uVar8] & 1 << (uVar9 & 0xff)) != 0) {
          uVar7 = uVar7 + 1;
        }
      }
      iVar6 = 0;
      if (uVar12 == uVar7) {
        iVar6 = 2;
        local_60 = CONCAT13(local_60._3_1_,0x80f1);
      }
      *(undefined1 *)((int)&local_60 + iVar6) = 0xf1;
      *(undefined1 *)((int)&local_60 + iVar6 + 1) = 0x90;
      *(char *)((int)&local_60 + iVar6 + 2) = (char)(uVar7 + 0xf080 >> 8);
      *(char *)((int)&local_60 + iVar6 + 3) = (char)(uVar7 + 0xf080);
      *(char *)((int)&local_60 + iVar6 + 4) = (char)(uVar12 + 0xf090 >> 8);
      *(char *)((int)&local_60 + iVar6 + 5) = (char)(uVar12 + 0xf090);
      auStack_5c[iVar6 + 2] = 0;
      if ((*(byte *)(iVar11 + 0xc) & 4) == 0) {
        thunk_FUN_020741c4(&local_60,
                           (uint)*(byte *)(iVar11 + 8) * 0xa4 +
                           *(int *)(*(int *)(*(int *)(param_1 + 0x84) + 0x44) + 4));
      }
      else {
        thunk_FUN_020741c4(&local_60,
                           (uint)*(byte *)(iVar11 + 8) * 0xa4 +
                           *(int *)(*(int *)(*(int *)(param_1 + 0x84) + 0x40) + 4));
      }
      uVar10 = func_0x021ace90(*(undefined4 *)(iVar1 + 4),&local_60,
                               *(undefined4 *)(param_1 + iVar5 * 4 + 0x1c));
      if ((uint)*(byte *)(*(int *)(param_1 + 0x88) + iVar5 + 0x31) ==
          *(uint *)(*(int *)(param_1 + 0x84) + 0x4c)) {
        uVar4 = uVar10;
      }
    }
    else {
      piVar3 = *(int **)(*(int *)(param_1 + iVar5 * 4 + 0x1c) + 4);
      (**(code **)(*piVar3 + 0xd8))(piVar3,0);
    }
  }
  (**(code **)(**(int **)(iVar1 + 4) + 0x1a0))(*(int **)(iVar1 + 4),uVar4,0);
  (**(code **)(**(int **)(iVar1 + 4) + 0x198))(*(int **)(iVar1 + 4),uVar4);
  *(code **)(*(int *)(iVar1 + 4) + 0x14c) = FUN_02150970;
  FUN_02150970(iVar1,0);
  *(int *)(param_1 + 0x18) = iVar1;
  FUN_0214d6e8();
  return;
}

