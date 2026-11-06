
/* JUS-CLASS ScreenInstance_Derived_02093d14::vfunc_45 [class-virtual] slot 45 of vtable 02093d14
   (own slot, not inherited) */

void ScreenInstance_Derived_02093d14::vfunc_45(undefined4 param_1,int param_2,int *param_3)

{
  ushort uVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined1 auStack_15c [7];
  undefined1 uStack_155;
  undefined1 uStack_154;
  undefined1 uStack_153;
  undefined1 uStack_152;
  undefined1 uStack_151;
  undefined1 uStack_150;
  undefined1 uStack_14f;
  undefined2 uStack_14c;
  undefined2 uStack_14a;
  undefined2 uStack_148;
  undefined2 uStack_146;
  undefined1 auStack_140 [7];
  undefined1 uStack_139;
  undefined1 uStack_138;
  undefined1 uStack_137;
  undefined1 uStack_136;
  undefined1 uStack_135;
  undefined1 uStack_134;
  undefined1 uStack_133;
  undefined2 uStack_130;
  undefined2 uStack_12e;
  undefined2 uStack_12c;
  undefined2 uStack_12a;
  undefined1 auStack_124 [256];
  
                    /* JUS-TAG strings=["../Character/",".ncg"] */
  iVar4 = (**(code **)(*param_3 + 0x2c))(param_3,0);
  iVar5 = (**(code **)(*param_3 + 0x28))();
  iVar4 = iVar4 + iVar5;
  piVar8 = *(int **)(param_2 + 100);
  if ((*(int *)(iVar4 + 0x20) == 0) || (*(int *)(iVar4 + 0x24) != 1)) {
    iVar5 = (**(code **)(*piVar8 + 0xc4))();
    if (iVar5 != iRam020378a8) {
      iVar5 = FUN_0201a228(0x78);
      piVar8 = (int *)0x0;
      if (iVar5 != 0) {
        piVar8 = (int *)jus_Class_0209b250::jus_Class_0209b250(iVar5,param_2);
      }
      FUN_0202201c(param_2,piVar8);
    }
    uStack_155 = 2;
    uStack_154 = 0;
    uStack_153 = 10;
    uStack_152 = 0xc;
    uStack_151 = 4;
    uStack_150 = 10;
    uStack_14c = 8;
    uStack_14a = 8;
    uStack_14f = 0xb;
    uStack_148 = (undefined2)*(undefined4 *)(iVar4 + 0x18);
    uStack_146 = (undefined2)*(undefined4 *)(iVar4 + 0x1c);
    (**(code **)(*piVar8 + 200))(piVar8,auStack_15c);
  }
  else {
    iVar5 = (**(code **)(*piVar8 + 0xc4))();
    if (iVar5 != iRam020378a4) {
      iVar5 = FUN_0201a228(0x78);
      piVar8 = (int *)0x0;
      if (iVar5 != 0) {
        piVar8 = (int *)jus_Class_0209b330::jus_Class_0209b330(iVar5,param_2);
      }
      FUN_0202201c(param_2,piVar8);
    }
    uStack_139 = 1;
    uStack_137 = 8;
    uStack_134 = 8;
    uStack_133 = 8;
    uStack_130 = 8;
    uStack_12e = 8;
    uStack_138 = 0;
    uStack_136 = 0;
    uStack_135 = 0;
    uStack_12c = (undefined2)*(undefined4 *)(iVar4 + 0x18);
    uStack_12a = (undefined2)*(undefined4 *)(iVar4 + 0x1c);
    (**(code **)(*piVar8 + 200))(piVar8,auStack_140);
  }
  (**(code **)(*piVar8 + 0xcc))(piVar8,param_3);
  (**(code **)(*piVar8 + 0xd0))(piVar8,iVar4 + 0x28);
  iVar5 = (**(code **)(*param_3 + 0x2c))(param_3,0);
  iVar6 = (**(code **)(*param_3 + 0x28))();
  uVar1 = *(ushort *)(iVar5 + iVar6 + 0xe);
  uVar11 = (uint)(*(ushort *)(iVar5 + iVar6 + 0xc) >> 2);
  for (uVar13 = 0; uVar13 < uVar1; uVar13 = uVar13 + 1) {
    if (*(int *)(iVar4 + uVar11 * 4) == iRam020378ac) {
      iVar6 = iVar4 + (uVar11 + 2) * 4;
      iVar9 = 0;
      iVar10 = param_3[4];
      for (iVar5 = 0; cVar2 = *(char *)(iVar10 + iVar5), cVar2 != '\0'; iVar5 = iVar5 + 1) {
        if (cVar2 == '/' || cVar2 == '\\') {
          iVar9 = iVar5 + 1;
        }
      }
      FUN_02004b94(PTR_DAT_020378b0,iVar10,iVar9);
      FUN_02004b94(PTR_DAT_020378b4,iVar10,iVar9);
      puVar3 = PTR_DAT_020378b4;
      iVar12 = 0;
      PTR_DAT_020378b0[iVar9] = 0;
      puVar3[iVar9] = 0;
      for (iVar5 = 0; cVar2 = *(char *)(iVar6 + iVar5), cVar2 != '\0'; iVar5 = iVar5 + 1) {
        if (cVar2 == '/' || cVar2 == '\\') {
          iVar12 = iVar5 + 1;
        }
      }
      FUN_02004bcc(PTR_DAT_020378b0,iVar6 + iVar12);
      iVar9 = 0;
      iVar5 = FUN_02033bb8(PTR_DAT_020378b0);
      if (iVar5 == 0) {
        uVar7 = FUN_02033c20(iVar10,PTR_DAT_020378b8);
        iVar5 = FUN_02033bb8();
        if (iVar5 == 0) {
          FUN_02004bcc(PTR_DAT_020378b4,PTR_s____Character__020378bc);
          uVar7 = FUN_02033d24(PTR_DAT_020378b4);
          FUN_02004b18(auStack_124,uVar7);
          FUN_02004b18(PTR_DAT_020378b4,auStack_124);
          FUN_02004bcc(PTR_DAT_020378b4,iVar6 + iVar12);
          puVar3 = PTR_DAT_020378b8;
          uVar7 = FUN_02033cb4(iVar10);
          uVar7 = FUN_02033c20(uVar7,puVar3);
          FUN_02004bcc(auStack_124,uVar7);
          iVar5 = FUN_02033bb8(PTR_DAT_020378b4);
          if (iVar5 == 0) {
            iVar5 = FUN_02033bb8(auStack_124);
            if (iVar5 != 0) {
              iVar9 = FUN_02016594(auStack_124);
            }
          }
          else {
            iVar9 = FUN_02016594(PTR_DAT_020378b4);
          }
        }
        else {
          iVar9 = FUN_02016594(uVar7);
        }
      }
      else {
        iVar9 = FUN_02016594(PTR_DAT_020378b0);
      }
      if (iVar9 != 0) {
        piVar8 = (int *)(**(code **)(**(int **)(PTR_DAT_020378c0 + 0x1c8) + 8))();
        (**(code **)(*piVar8 + 0x28))(piVar8,iVar9);
        FUN_0203263c(piVar8,iVar6);
        (**(code **)(**(int **)(param_2 + 100) + 0x50))(*(int **)(param_2 + 100),piVar8,0);
        (**(code **)(*piVar8 + 0xc))();
      }
    }
    uVar11 = uVar11 + (*(uint *)(iVar4 + uVar11 * 4 + 4) >> 2);
  }
  return;
}

