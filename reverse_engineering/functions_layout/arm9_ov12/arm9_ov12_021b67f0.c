
/* JUS-GAME ALObjectImp::PostMessage [source-string-template] __FILE__="ALObjectImp.h"
   __FUNCTION__="PostMessage"; one of 3 instantiations in arm9_ov12 */

void ALObjectImp::PostMessage(undefined4 param_1,undefined4 param_2,int *param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  code *pcVar12;
  int *piVar13;
  uint local_1a4;
  int local_19c;
  int *local_194;
  uint local_190;
  char local_188 [4];
  int local_184;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  int local_168;
  int local_164;
  undefined1 auStack_160 [4];
  int local_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  uint local_140;
  uint local_13c;
  undefined4 local_138;
  uint local_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  undefined4 local_124;
  uint local_120;
  uint local_11c;
  uint local_118 [32];
  uint local_98 [32];
  uint uStack_18;
  
  uStack_18 = param_4;
  iVar2 = FUN_021b539c();
  piVar13 = *(int **)(iVar2 + 4);
  local_1a4 = 0;
  for (uVar10 = 0; uVar10 < param_4; uVar10 = uVar10 + 1) {
    iVar2 = FUN_021acab4(*(undefined4 *)(*(int *)(param_3[uVar10] + 4) + 0x1c));
    piVar11 = *(int **)(iVar2 + 4);
    for (uVar6 = 1; uVar9 = (**(code **)(*piVar11 + 0xac))(), uVar6 < uVar9; uVar6 = uVar6 + 1) {
      iVar2 = (**(code **)(*piVar11 + 0xc0))(piVar11,uVar6);
      iVar5 = FUN_021ada10();
      if (iVar5 != 0) {
        iVar5 = FUN_0204327c();
        if (iVar5 == 0) {
          iVar2 = (**(code **)(**(int **)(*(int *)(iVar2 + 100) + 0x34) + 0x7c))();
          if (iVar2 != 0) {
            bVar1 = false;
            goto LAB_021b686e;
          }
        }
        else {
          iVar2 = (**(code **)(**(int **)(*(int *)(iVar2 + 100) + 0x34) + 0x7c))();
          if (iVar2 == 0) {
            bVar1 = false;
            goto LAB_021b686e;
          }
        }
      }
    }
    bVar1 = true;
LAB_021b686e:
    if (bVar1) {
      param_3[local_1a4] = param_3[uVar10];
      local_1a4 = local_1a4 + 1;
    }
  }
  if (local_1a4 != 0) {
    iVar2 = FUN_021acab4(*(undefined4 *)(*(int *)(*param_3 + 4) + 0x1c));
    piVar11 = *(int **)(iVar2 + 4);
    if (1 < local_1a4) {
      puVar8 = local_98;
      uVar10 = 0;
      do {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      } while (puVar8 < &uStack_18);
      iVar2 = (**(code **)(*piVar11 + 0x9c))();
      if (iVar2 == 0x20204253) {
        FUN_021ae0ac(&local_11c,piVar11[0x19]);
        uVar10 = 1;
        local_98[0] = local_11c;
        piVar3 = (int *)piVar11[0x24];
      }
      else {
        iVar2 = (**(code **)(*piVar11 + 0x9c))();
        if (iVar2 == 0x20205453) {
          FUN_021ae0ac(&local_120,piVar11[0x19]);
          local_98[0] = local_120;
          FUN_021ae0ac(&local_124,*(undefined4 *)(piVar11[0x24] + 100));
          uVar10 = 2;
          local_98[1] = local_124;
          piVar3 = *(int **)(piVar11[0x24] + 0x90);
        }
        else {
          piVar3 = piVar11;
        }
      }
      FUN_021ae0ac(&local_128,piVar11[0x19]);
      local_98[uVar10] = local_128;
      for (iVar2 = piVar3[0x27]; uVar10 = uVar10 + 1, iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x9c)) {
        FUN_021ae0ac(&local_12c,*(undefined4 *)(iVar2 + 100));
        local_98[uVar10] = local_12c;
      }
      for (local_190 = 1; local_190 < local_1a4; local_190 = local_190 + 1) {
        puVar8 = local_118;
        uVar6 = 0;
        do {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        } while (puVar8 < local_98);
        iVar2 = FUN_021acab4(*(undefined4 *)(*(int *)(param_3[local_190] + 4) + 0x1c));
        piVar3 = *(int **)(iVar2 + 4);
        iVar2 = (**(code **)(*piVar3 + 0x9c))();
        if (iVar2 == 0x20204253) {
          FUN_021ae0ac(&local_130,piVar11[0x19]);
          uVar6 = 1;
          local_118[0] = local_130;
          local_194 = (int *)piVar3[0x24];
        }
        else {
          iVar2 = (**(code **)(*piVar3 + 0x9c))();
          if (iVar2 == 0x20205453) {
            FUN_021ae0ac(&local_134,piVar11[0x19]);
            local_118[0] = local_134;
            FUN_021ae0ac(&local_138,*(undefined4 *)(piVar3[0x24] + 100));
            uVar6 = 2;
            local_118[1] = local_138;
            local_194 = *(int **)(piVar3[0x24] + 0x90);
          }
          else {
            local_194 = piVar3;
          }
        }
        FUN_021ae0ac(&local_13c,local_194[0x19]);
        local_118[uVar6] = local_13c;
        for (local_19c = local_194[0x27]; uVar6 = uVar6 + 1, local_19c != 0;
            local_19c = *(int *)(local_19c + 0x9c)) {
          FUN_021ae0ac(&local_140,*(undefined4 *)(local_19c + 100));
          local_118[uVar6] = local_140;
        }
        uVar9 = 0;
        while( true ) {
          if (uVar6 < uVar10) {
            uVar4 = uVar10;
          }
          else {
            uVar4 = uVar6;
          }
          if (uVar4 <= uVar9) goto LAB_021b6a96;
          if (uVar10 < uVar6) {
            uVar4 = uVar10;
          }
          else {
            uVar4 = uVar6;
          }
          if ((uVar4 <= uVar9) && (uVar10 < uVar6)) break;
          if (uVar10 < uVar6) {
            uVar4 = uVar10;
          }
          else {
            uVar4 = uVar6;
          }
          if ((uVar9 < uVar4) && ((int)local_118[uVar9] < (int)local_98[uVar9])) break;
          if (uVar10 < uVar6) {
            uVar4 = uVar10;
          }
          else {
            uVar4 = uVar6;
          }
          if ((uVar9 < uVar4) && ((int)local_98[uVar9] < (int)local_118[uVar9])) goto LAB_021b6a96;
          uVar9 = uVar9 + 1;
        }
        for (uVar10 = 0; uVar10 < uVar6; uVar10 = uVar10 + 1) {
          local_98[uVar10] = local_118[uVar10];
        }
        piVar11 = piVar3;
        uVar10 = uVar6;
LAB_021b6a96:
      }
    }
    iVar2 = (**(code **)(*piVar11 + 0x9c))();
    if (iVar2 == 0x20205453) {
      iVar2 = *(int *)(piVar11[0x24] + 0x90);
      if ((((*(uint *)(iVar2 + 0x90) & 8) != 8) && (iVar5 = FUN_021b712c(iVar2), iVar5 == 0)) &&
         ((*(uint *)(*(int *)(iVar2 + 0x9c) + 0x90) & 8) != 8)) {
        if ((*(int *)(piVar11[0x24] + 0xb4) != 0) &&
           (iVar2 = (**(code **)(*piVar13 + 0x130))(), iVar2 != 0)) {
          pcVar12 = *(code **)(piVar11[0x24] + 0xb4);
          uVar7 = FUN_021b6f30();
          (*pcVar12)(uVar7,4,0);
        }
        if (piVar11[0x28] + 1 == DAT_02093c24) {
          if ((char)piVar11[0x27] == '\0') {
            FUN_021ae104(&local_148,piVar13);
            local_144 = (piVar11[0x2a] + local_148) - piVar11[0x29];
            PostMessage(piVar11[0x24],&local_144);
          }
          else {
            FUN_021b6f58(&local_150,piVar13);
            local_14c = (piVar11[0x2a] + local_150) - piVar11[0x29];
            PostMessage(piVar11[0x24],&local_14c);
          }
        }
        else {
          if ((char)piVar11[0x27] == '\0') {
            FUN_021ae104(&local_154,piVar13);
          }
          else {
            FUN_021b6f58(&local_158,piVar13);
            local_154 = local_158;
          }
          piVar11[0x29] = local_154;
          FUN_021b9040(&local_15c,piVar11[0x24]);
          piVar11[0x2a] = local_15c;
        }
        piVar11[0x28] = DAT_02093c24;
      }
    }
    else {
      iVar2 = (**(code **)(*piVar11 + 0x9c))();
      if (iVar2 == 0x20204253) {
        iVar2 = FUN_021b6f68(piVar13);
        if (((iVar2 != 0) && (iVar2 = piVar11[0x24], (*(uint *)(iVar2 + 0x90) & 8) != 8)) &&
           ((iVar5 = FUN_021b712c(iVar2), iVar5 == 0 &&
            ((*(uint *)(*(int *)(iVar2 + 0x9c) + 0x90) & 8) != 8)))) {
          iVar2 = (**(code **)(*(int *)piVar11[0x14] + 0x4c))();
          FUN_021b6f58(auStack_160,piVar13);
          FUN_021ae104(&local_164,piVar13);
          uVar10 = local_164 - *(int *)(iVar2 + 0x14);
          if ((piVar11[0x2b] & 1U) == 0) {
            if ((uint)piVar11[0x27] < uVar10 >> 0xc) {
              if (uVar10 >> 0xc < (uint)(piVar11[0x26] - piVar11[0x27])) {
                if ((piVar11[0x2c] == 0) || (FUN_021ae104(&local_168), local_168 <= (int)uVar10)) {
                  if ((piVar11[0x2c] != 0) &&
                     (iVar2 = *(int *)(piVar11[0x2c] + 0x98), FUN_021ae104(&local_16c),
                     local_16c + iVar2 * 0x1000 <= (int)uVar10)) {
                    iVar5 = piVar11[0x24];
                    iVar2 = jus_AllocDebug(0x2c,s_ALObjectImp_h_021d3c10,s_PostMessage_021d3be4,
                                           0x10a);
                    uVar7 = 0;
                    if (iVar2 != 0) {
                      uVar7 = jus_Class_021d293c::jus_Class_021d293c(iVar2,0x80011006,piVar11,1,0,0)
                      ;
                    }
                    FUN_02028644(iVar5,uVar7,0);
                    pcVar12 = (code *)piVar11[0x2d];
                    if (pcVar12 != (code *)0x0) {
                      uVar7 = FUN_021b6f30(piVar11);
                      iVar2 = (**(code **)(*piVar13 + 0x130))();
                      (*pcVar12)(uVar7,1,iVar2 == 0);
                    }
                  }
                }
                else {
                  iVar5 = piVar11[0x24];
                  iVar2 = jus_AllocDebug(0x2c,s_ALObjectImp_h_021d3c10,s_PostMessage_021d3be4,0x10a)
                  ;
                  uVar7 = 0;
                  if (iVar2 != 0) {
                    uVar7 = jus_Class_021d293c::jus_Class_021d293c
                                      (iVar2,0x80011006,piVar11,0xffffffff,0,0);
                  }
                  FUN_02028644(iVar5,uVar7,0);
                  pcVar12 = (code *)piVar11[0x2d];
                  if (pcVar12 != (code *)0x0) {
                    uVar7 = FUN_021b6f30(piVar11);
                    iVar2 = (**(code **)(*piVar13 + 0x130))();
                    (*pcVar12)(uVar7,2,iVar2 == 0);
                  }
                }
              }
              else {
                iVar5 = piVar11[0x24];
                iVar2 = jus_AllocDebug(0x2c,s_ALObjectImp_h_021d3c10,s_PostMessage_021d3be4,0x10a);
                uVar7 = 0;
                if (iVar2 != 0) {
                  uVar7 = jus_Class_021d293c::jus_Class_021d293c(iVar2,0x80011004,piVar11,1,0,0);
                }
                FUN_02028644(iVar5,uVar7,0);
                pcVar12 = (code *)piVar11[0x2d];
                if (pcVar12 != (code *)0x0) {
                  uVar7 = FUN_021b6f30(piVar11);
                  iVar2 = (**(code **)(*piVar13 + 0x130))();
                  (*pcVar12)(uVar7,1,iVar2 == 0);
                }
              }
            }
            else {
              iVar5 = piVar11[0x24];
              iVar2 = jus_AllocDebug(0x2c,s_ALObjectImp_h_021d3c10,s_PostMessage_021d3be4,0x10a);
              uVar7 = 0;
              if (iVar2 != 0) {
                uVar7 = jus_Class_021d293c::jus_Class_021d293c
                                  (iVar2,0x80011004,piVar11,0xffffffff,0,0);
              }
              FUN_02028644(iVar5,uVar7,0);
              pcVar12 = (code *)piVar11[0x2d];
              if (pcVar12 != (code *)0x0) {
                uVar7 = FUN_021b6f30(piVar11);
                iVar2 = (**(code **)(*piVar13 + 0x130))();
                (*pcVar12)(uVar7,0,iVar2 == 0);
              }
            }
          }
        }
      }
      else if ((((piVar11[0x24] & 8U) != 8) && (iVar2 = FUN_021b712c(piVar11), iVar2 == 0)) &&
              ((*(uint *)(piVar11[0x27] + 0x90) & 8) != 8)) {
        iVar2 = (**(code **)(*(int *)piVar11[0x14] + 0x4c))();
        uVar10 = 0;
        iVar5 = (**(code **)(*piVar13 + 0x130))();
        if (iVar5 != 0) {
          uVar10 = (**(code **)(*piVar13 + 0x130))();
          uVar10 = uVar10 | 0x10000;
        }
        iVar5 = FUN_021b6f68(piVar13);
        if (iVar5 != 0) {
          uVar6 = FUN_021b6f68(piVar13);
          uVar10 = uVar10 | uVar6 | 0x20000;
        }
        if (uVar10 != 0) {
          local_188[0] = '\0';
          FUN_021b6f58(&local_170,piVar13);
          iVar5 = local_170 - *(int *)(iVar2 + 0x10);
          FUN_021ae104(&local_174,piVar13);
          local_184 = local_174 - *(int *)(iVar2 + 0x14);
          if (piVar11[0x3c] != 0) {
            local_17c = local_184;
            local_178 = iVar5;
            uVar7 = FUN_021acab4(piVar11);
            (*(code *)piVar11[0x3c])(uVar7,&local_178,&local_17c,uVar10,local_188);
          }
          if (local_188[0] == '\0') {
            local_180 = iVar5;
            (**(code **)(*piVar11 + 0x134))(piVar11,&local_180,&local_184,uVar10);
          }
        }
      }
    }
  }
  return;
}

