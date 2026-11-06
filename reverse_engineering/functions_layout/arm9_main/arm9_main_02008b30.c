
uint FUN_02008b30(undefined4 *param_1,undefined8 *param_2,int param_3,int param_4,uint param_5,
                 int param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  uint *puVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  int iVar14;
  char cVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined4 local_2d8;
  undefined4 local_2d0;
  int local_2c8;
  int local_2c0;
  int local_2bc;
  int local_2b4;
  int local_2b0;
  undefined8 *local_2a0;
  uint *local_28c;
  undefined8 *local_284;
  undefined8 *local_280;
  undefined4 *local_27c;
  int local_278;
  int local_274;
  int local_26c;
  uint local_268;
  int local_260;
  undefined4 local_258;
  undefined4 local_250;
  undefined8 local_248 [20];
  undefined8 local_1a8;
  undefined4 local_1a0 [38];
  undefined8 local_108 [19];
  uint auStack_6c [21];
  int iStack_18;
  
  iVar2 = *(int *)(&DAT_0208db10 + param_5 * 4);
  iVar3 = param_4 + -1;
  iStack_18 = param_4;
  local_260 = FUN_0200d12c(param_3 + -3,0x18);
  if (local_260 < 0) {
    local_260 = 0;
  }
  iVar14 = 0;
  local_274 = param_3 + (local_260 + 1) * -0x18;
  iVar10 = local_260 - iVar3;
  iVar4 = iVar3 + iVar2;
  if ((-1 < iVar4) && (-1 < iVar4)) {
    puVar13 = (undefined4 *)(param_6 + iVar10 * 4);
    puVar9 = local_108;
    do {
      if (iVar10 < 0) {
        uVar17 = 0;
      }
      else {
        uVar17 = FUN_0200b850(*puVar13);
      }
      *puVar9 = uVar17;
      iVar14 = iVar14 + 1;
      puVar9 = puVar9 + 1;
      puVar13 = puVar13 + 1;
      iVar10 = iVar10 + 1;
    } while (iVar14 <= iVar4);
  }
  local_2c8 = 0;
  if (-1 < iVar2) {
    local_2a0 = local_248;
    do {
      iVar4 = 0;
      uVar17 = 0;
      if (-1 < iVar3) {
        puVar13 = param_1;
        uVar17 = 0;
        do {
          local_250 = (undefined4)uVar17;
          iVar10 = (iVar3 + local_2c8) - iVar4;
          uVar16 = FUN_0200b8cc(*puVar13,puVar13[1],*(undefined4 *)(local_108 + iVar10),
                                *(undefined4 *)((int)local_108 + (iVar10 * 2 + 1) * 4));
          uVar17 = FUN_0200b3a0(local_250,(int)((ulonglong)uVar17 >> 0x20),(int)uVar16,
                                (int)((ulonglong)uVar16 >> 0x20));
          iVar4 = iVar4 + 1;
          puVar13 = puVar13 + 2;
        } while (iVar4 <= iVar3);
      }
      *local_2a0 = uVar17;
      local_2a0 = local_2a0 + 1;
      local_2c8 = local_2c8 + 1;
    } while (local_2c8 <= iVar2);
  }
  local_2b4 = iVar2;
  while( true ) {
    local_2b0 = local_2b4;
    puVar9 = local_248 + local_2b4;
    uVar11 = *(undefined4 *)((int)local_248 + (local_2b4 * 2 + 1) * 4);
    uVar16 = CONCAT44(uVar11,*(undefined4 *)(local_248 + local_2b4));
    uVar17 = CONCAT44(uVar11,*(undefined4 *)(local_248 + local_2b4));
    if ((0 < local_2b4) && (uVar17 = uVar16, 0 < local_2b4)) {
      local_28c = auStack_6c;
      do {
        local_28c = local_28c + 1;
        uVar12 = (undefined4)((ulonglong)uVar17 >> 0x20);
        FUN_0200b8cc(0,0x3e700000,(int)uVar17,uVar12);
        FUN_0200b778();
        uVar16 = FUN_0200b850();
        uVar11 = (undefined4)((ulonglong)uVar16 >> 0x20);
        uVar18 = FUN_0200b8cc(0,0x41700000,(int)uVar16,uVar11);
        FUN_0200bc6c((int)uVar17,uVar12,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
        uVar5 = FUN_0200b778();
        *local_28c = uVar5;
        uVar17 = FUN_0200b3a0((int)uVar16,uVar11,*(undefined4 *)(puVar9 + -1),
                              *(undefined4 *)((int)puVar9 + -4));
        puVar9 = puVar9 + -1;
        local_2b0 = local_2b0 + -1;
      } while (0 < local_2b0);
    }
    uVar17 = FUN_0200aabc((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),local_274);
    uVar11 = (undefined4)((ulonglong)uVar17 >> 0x20);
    FUN_0200b8cc(0,0x3fc00000,(int)uVar17,uVar11);
    uVar16 = FUN_02009928();
    uVar16 = FUN_0200b8cc(0,0x40200000,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
    uVar17 = FUN_0200bc6c((int)uVar17,uVar11,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
    local_268 = FUN_0200b778();
    uVar16 = FUN_0200b850();
    uVar17 = FUN_0200bc6c((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),(int)uVar16,
                          (int)((ulonglong)uVar16 >> 0x20));
    uVar11 = (undefined4)((ulonglong)uVar17 >> 0x20);
    local_278 = 0;
    cVar15 = '\x01';
    if (local_274 < 1) {
      if (local_274 == 0) {
        local_278 = (int)auStack_6c[local_2b4] >> 0x17;
      }
      else {
        FUN_0200c20c((int)uVar17,uVar11,0,0x3fe00000);
        if (cVar15 != '\0') {
          local_278 = 2;
        }
      }
    }
    else {
      uVar5 = auStack_6c[local_2b4];
      iVar4 = (int)uVar5 >> (0x18U - local_274 & 0xff);
      local_268 = local_268 + iVar4;
      uVar5 = uVar5 - (iVar4 << (0x18U - local_274 & 0xff));
      auStack_6c[local_2b4] = uVar5;
      local_278 = (int)uVar5 >> (0x17U - local_274 & 0xff);
    }
    if (0 < local_278) {
      bVar1 = false;
      local_268 = local_268 + 1;
      iVar4 = 0;
      if (0 < local_2b4) {
        puVar8 = auStack_6c;
        do {
          puVar8 = puVar8 + 1;
          uVar5 = *puVar8;
          if (bVar1) {
            *puVar8 = 0xffffff - uVar5;
          }
          else if (uVar5 != 0) {
            bVar1 = true;
            *puVar8 = 0x1000000 - uVar5;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < local_2b4);
      }
      if (0 < local_274) {
        if (local_274 == 1) {
          auStack_6c[local_2b4] = auStack_6c[local_2b4] & 0x7fffff;
        }
        else if (local_274 == 2) {
          auStack_6c[local_2b4] = auStack_6c[local_2b4] & 0x3fffff;
        }
      }
      if (local_278 == 2) {
        uVar17 = FUN_0200bc6c(0,0x3ff00000,(int)uVar17,uVar11);
        if (bVar1) {
          uVar16 = FUN_0200aabc(0,0x3ff00000,local_274);
          uVar17 = FUN_0200bc6c((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),(int)uVar16,
                                (int)((ulonglong)uVar16 >> 0x20));
        }
      }
    }
    iVar4 = (int)((ulonglong)uVar17 >> 0x20);
    local_2d8 = (undefined4)uVar17;
    cVar15 = iVar4 == 0;
    FUN_0200c390(0,0,local_2d8);
    if (cVar15 == '\0') break;
    iVar10 = local_2b4 + -1;
    uVar5 = 0;
    if (iVar2 <= iVar10) {
      puVar8 = auStack_6c + local_2b4;
      do {
        iVar10 = iVar10 + -1;
        uVar5 = uVar5 | *puVar8;
        puVar8 = puVar8 + -1;
      } while (iVar2 <= iVar10);
    }
    if (uVar5 != 0) break;
    local_26c = 1;
    uVar5 = auStack_6c[iVar2];
    while (uVar5 == 0) {
      local_26c = local_26c + 1;
      uVar5 = auStack_6c[(iVar2 - local_26c) + 1];
    }
    local_2c0 = local_2b4 + 1;
    if (local_2c0 <= local_2b4 + local_26c) {
      local_27c = (undefined4 *)(param_6 + local_260 * 4 + local_2c0 * 4);
      local_280 = local_108 + local_2c0 + iVar3;
      local_284 = local_248 + local_2c0;
      do {
        uVar17 = FUN_0200b850(*local_27c);
        iVar4 = 0;
        *local_280 = uVar17;
        uVar17 = 0;
        if (-1 < iVar3) {
          puVar13 = param_1;
          uVar17 = 0;
          do {
            local_258 = (undefined4)uVar17;
            iVar10 = (iVar3 + local_2c0) - iVar4;
            uVar16 = FUN_0200b8cc(*puVar13,puVar13[1],*(undefined4 *)(local_108 + iVar10),
                                  *(undefined4 *)((int)local_108 + (iVar10 * 2 + 1) * 4));
            uVar17 = FUN_0200b3a0(local_258,(int)((ulonglong)uVar17 >> 0x20),(int)uVar16,
                                  (int)((ulonglong)uVar16 >> 0x20));
            iVar4 = iVar4 + 1;
            puVar13 = puVar13 + 2;
          } while (iVar4 <= iVar3);
        }
        *local_284 = uVar17;
        local_27c = local_27c + 1;
        local_280 = local_280 + 1;
        local_284 = local_284 + 1;
        local_2c0 = local_2c0 + 1;
      } while (local_2c0 <= local_2b4 + local_26c);
    }
    local_2b4 = local_2b4 + local_26c;
  }
  cVar15 = iVar4 == 0;
  FUN_0200c390(0,0,local_2d8);
  if (cVar15 == '\0') {
    uVar17 = FUN_0200aabc(local_2d8,iVar4,-local_274);
    uVar12 = (undefined4)((ulonglong)uVar17 >> 0x20);
    uVar11 = (undefined4)uVar17;
    cVar15 = '\0';
    FUN_0200c20c(uVar11,uVar12,0,0x41700000);
    if (cVar15 == '\0') {
      uVar5 = FUN_0200b778(uVar11,uVar12);
      auStack_6c[local_2b4 + 1] = uVar5;
    }
    else {
      FUN_0200b8cc(0,0x3e700000,uVar11,uVar12);
      FUN_0200b778();
      uVar17 = FUN_0200b850();
      uVar7 = (undefined4)((ulonglong)uVar17 >> 0x20);
      uVar16 = FUN_0200b8cc(0,0x41700000,(int)uVar17,uVar7);
      FUN_0200bc6c(uVar11,uVar12,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
      uVar5 = FUN_0200b778();
      auStack_6c[local_2b4 + 1] = uVar5;
      local_274 = local_274 + 0x18;
      uVar5 = FUN_0200b778((int)uVar17,uVar7);
      auStack_6c[local_2b4 + 2] = uVar5;
      local_2b4 = local_2b4 + 1;
    }
  }
  else {
    puVar8 = auStack_6c + local_2b4;
    uVar5 = auStack_6c[local_2b4];
    while( true ) {
      local_2b4 = local_2b4 + -1;
      local_274 = local_274 + -0x18;
      if (uVar5 != 0) break;
      puVar8 = puVar8 + -1;
      uVar5 = *puVar8;
    }
  }
  uVar17 = FUN_0200aabc(0,0x3ff00000,local_274);
  local_2bc = local_2b4;
  if (-1 < local_2b4) {
    puVar8 = auStack_6c + local_2b4 + 1;
    puVar9 = local_248 + local_2b4;
    do {
      uVar11 = (undefined4)((ulonglong)uVar17 >> 0x20);
      uVar16 = FUN_0200b850(*puVar8);
      uVar16 = FUN_0200b8cc((int)uVar17,uVar11,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
      *puVar9 = uVar16;
      uVar17 = FUN_0200b8cc((int)uVar17,uVar11,0,0x3e700000);
      puVar8 = puVar8 + -1;
      puVar9 = puVar9 + -1;
      local_2bc = local_2bc + -1;
    } while (-1 < local_2bc);
  }
  for (iVar3 = local_2b4; -1 < iVar3; iVar3 = iVar3 + -1) {
    uVar17 = 0;
    iVar10 = 0;
    puVar13 = &DAT_0208db20;
    puVar9 = local_248 + iVar3;
    iVar4 = local_2b4 - iVar3;
    while( true ) {
      uVar11 = (undefined4)((ulonglong)uVar17 >> 0x20);
      local_2d0 = (undefined4)uVar17;
      if ((iVar2 < iVar10) || (iVar4 < iVar10)) break;
      uVar17 = FUN_0200b8cc(*puVar13,puVar13[1],*(undefined4 *)puVar9,
                            *(undefined4 *)((int)puVar9 + 4));
      uVar17 = FUN_0200b3a0(local_2d0,uVar11,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
      puVar9 = puVar9 + 1;
      puVar13 = puVar13 + 2;
      iVar10 = iVar10 + 1;
    }
    *(undefined4 *)(&local_1a8 + iVar4) = local_2d0;
    *(undefined4 *)((int)&local_1a8 + (iVar4 * 2 + 1) * 4) = uVar11;
  }
  if (param_5 < 4) {
                    /* WARNING: Switch is manually overridden */
    switch(param_5) {
    case 0:
      uVar17 = 0;
      if (-1 < local_2b4) {
        puVar9 = &local_1a8 + local_2b4;
        uVar17 = 0;
        do {
          uVar17 = FUN_0200b3a0((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),*(undefined4 *)puVar9,
                                *(undefined4 *)((int)puVar9 + 4));
          puVar9 = puVar9 + -1;
          local_2b4 = local_2b4 + -1;
        } while (-1 < local_2b4);
      }
      if (local_278 != 0) {
        uVar17 = FUN_0200bc6c(0,0);
      }
      *param_2 = uVar17;
      break;
    default:
      uVar17 = 0;
      if (-1 < local_2b4) {
        puVar9 = &local_1a8 + local_2b4;
        iVar2 = local_2b4;
        uVar17 = 0;
        do {
          uVar17 = FUN_0200b3a0((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),*(undefined4 *)puVar9,
                                *(undefined4 *)((int)puVar9 + 4));
          puVar9 = puVar9 + -1;
          iVar2 = iVar2 + -1;
        } while (-1 < iVar2);
      }
      uVar11 = (undefined4)((ulonglong)uVar17 >> 0x20);
      uVar12 = (undefined4)uVar17;
      if (local_278 != 0) {
        uVar17 = FUN_0200bc6c(0,0,uVar12,uVar11);
      }
      *param_2 = uVar17;
      uVar17 = FUN_0200bc6c((undefined4)local_1a8,local_1a8._4_4_,uVar12,uVar11);
      iVar2 = 1;
      if (0 < local_2b4) {
        puVar13 = local_1a0;
        do {
          uVar17 = FUN_0200b3a0((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),*puVar13,puVar13[1]);
          iVar2 = iVar2 + 1;
          puVar13 = puVar13 + 2;
        } while (iVar2 <= local_2b4);
      }
      if (local_278 != 0) {
        uVar17 = FUN_0200bc6c(0,0);
      }
      param_2[1] = uVar17;
      break;
    case 3:
      if (0 < local_2b4) {
        puVar9 = &local_1a8 + local_2b4;
        iVar2 = local_2b4;
        do {
          uVar17 = FUN_0200b3a0(*(undefined4 *)(puVar9 + -1),*(undefined4 *)((int)puVar9 + -4),
                                *(undefined4 *)puVar9,*(undefined4 *)((int)puVar9 + 4));
          uVar16 = FUN_0200bc6c(*(undefined4 *)(puVar9 + -1),*(undefined4 *)((int)puVar9 + -4),
                                (int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
          uVar16 = FUN_0200b3a0(*(undefined4 *)puVar9,*(undefined4 *)((int)puVar9 + 4),(int)uVar16,
                                (int)((ulonglong)uVar16 >> 0x20));
          *puVar9 = uVar16;
          puVar6 = puVar9 + -1;
          iVar2 = iVar2 + -1;
          puVar9 = puVar9 + -1;
          *puVar6 = uVar17;
        } while (0 < iVar2);
      }
      if (1 < local_2b4) {
        puVar9 = &local_1a8 + local_2b4;
        iVar2 = local_2b4;
        do {
          uVar17 = FUN_0200b3a0(*(undefined4 *)(puVar9 + -1),*(undefined4 *)((int)puVar9 + -4),
                                *(undefined4 *)puVar9,*(undefined4 *)((int)puVar9 + 4));
          uVar16 = FUN_0200bc6c(*(undefined4 *)(puVar9 + -1),*(undefined4 *)((int)puVar9 + -4),
                                (int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
          uVar16 = FUN_0200b3a0(*(undefined4 *)puVar9,*(undefined4 *)((int)puVar9 + 4),(int)uVar16,
                                (int)((ulonglong)uVar16 >> 0x20));
          *puVar9 = uVar16;
          puVar6 = puVar9 + -1;
          iVar2 = iVar2 + -1;
          puVar9 = puVar9 + -1;
          *puVar6 = uVar17;
        } while (1 < iVar2);
      }
      uVar17 = 0;
      if (1 < local_2b4) {
        puVar9 = &local_1a8 + local_2b4;
        uVar17 = 0;
        do {
          uVar17 = FUN_0200b3a0((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),*(undefined4 *)puVar9,
                                *(undefined4 *)((int)puVar9 + 4));
          local_2b4 = local_2b4 + -1;
          puVar9 = puVar9 + -1;
        } while (1 < local_2b4);
      }
      if (local_278 == 0) {
        *(undefined4 *)param_2 = (undefined4)local_1a8;
        *(undefined4 *)((int)param_2 + 4) = local_1a8._4_4_;
        *(undefined4 *)(param_2 + 1) = local_1a0[0];
        *(undefined4 *)((int)param_2 + 0xc) = local_1a0[1];
        param_2[2] = uVar17;
      }
      else {
        uVar16 = FUN_0200bc6c(0,0,(undefined4)local_1a8,local_1a8._4_4_);
        *param_2 = uVar16;
        uVar16 = FUN_0200bc6c(0,0,local_1a0[0],local_1a0[1]);
        param_2[1] = uVar16;
        uVar17 = FUN_0200bc6c(0,0,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
        param_2[2] = uVar17;
      }
    }
  }
  return local_268 & 7;
}

