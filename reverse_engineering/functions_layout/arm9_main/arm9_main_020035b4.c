
/* WARNING: Type propagation algorithm not settling */

int FUN_020035b4(code *param_1,undefined4 param_2,char *param_3,uint *param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  undefined *puVar7;
  uint *puVar8;
  int *piVar9;
  byte *pbVar10;
  uint local_260;
  uint local_25c;
  byte *local_258;
  uint local_250;
  uint local_24c;
  uint local_248;
  uint local_244;
  uint local_240;
  int local_23c;
  undefined1 local_238;
  char local_237 [3];
  undefined4 local_234;
  uint local_230;
  int local_22c;
  byte *local_228;
  byte local_224 [511];
  byte bStack_25;
  uint *local_4;
  
  local_237[0] = ' ';
  local_23c = 0;
  cVar1 = *param_3;
  local_4 = param_4;
  do {
    if (cVar1 == '\0') {
      return local_23c;
    }
    iVar3 = FUN_02004d14(param_3,0x25);
    if (iVar3 == 0) {
      iVar3 = FUN_02004b04(param_3);
      if (iVar3 == 0) {
        return local_23c + iVar3;
      }
      iVar4 = (*param_1)(param_2,param_3);
      if (iVar4 == 0) {
        return -1;
      }
      return local_23c + iVar3;
    }
    local_23c = local_23c + (iVar3 - (int)param_3);
    if ((iVar3 - (int)param_3 != 0) && (iVar4 = (*param_1)(param_2,param_3), iVar4 == 0)) {
      return -1;
    }
    param_3 = (char *)FUN_02002578(iVar3,&local_4,&local_234);
    puVar8 = local_4;
    uVar6 = local_230 >> 8 & 0xff;
    if (uVar6 < 0x62) {
      if (uVar6 < 0x61) {
        if (uVar6 < 0x48) {
          if (-1 < (int)(uVar6 - 0x41)) {
                    /* WARNING: Switch is manually overridden */
            switch(uVar6 - 0x41) {
            case 0:
              goto switchD_02003666_caseD_41;
            default:
              goto switchD_02003666_caseD_42;
            case 4:
              goto switchD_02003666_caseD_45;
            }
          }
          if (uVar6 != 0x25) goto switchD_02003666_caseD_42;
          local_224[0] = 0x25;
          pbVar5 = local_224;
          local_258 = (byte *)0x1;
          goto LAB_02003a92;
        }
        if (uVar6 != 0x58) goto switchD_02003666_caseD_42;
        goto switchD_0200369a_caseD_6f;
      }
switchD_02003666_caseD_41:
      if ((char)local_230 == '\t') {
        local_260 = *local_4;
        local_25c = local_4[1];
      }
      else {
        local_260 = *local_4;
        local_25c = local_4[1];
      }
      local_4 = local_4 + 2;
      pbVar5 = (byte *)FUN_02002cdc(local_260,local_25c,local_224 + 0x200,local_234,local_230,
                                    local_22c,local_228);
      if (pbVar5 == (byte *)0x0) goto switchD_02003666_caseD_42;
      local_258 = local_224 + (0x1ff - (int)pbVar5);
      goto LAB_02003a92;
    }
    if (0x75 < uVar6) {
      if ((0x78 < uVar6) || (uVar6 != 0x78)) goto switchD_02003666_caseD_42;
switchD_0200369a_caseD_6f:
      uVar6 = local_230 & 0xff;
      if (uVar6 == 3) {
        local_240 = *local_4;
        local_4 = local_4 + 1;
      }
      else if (uVar6 == 4) {
        local_248 = *local_4;
        local_244 = local_4[1];
        local_4 = local_4 + 2;
      }
      else if (uVar6 == 6) {
        local_248 = *local_4;
        local_244 = local_4[1];
        local_4 = local_4 + 2;
      }
      else if (uVar6 == 7) {
        local_240 = *local_4;
        local_4 = local_4 + 1;
      }
      else if (uVar6 == 8) {
        local_240 = *local_4;
        local_4 = local_4 + 1;
      }
      else {
        local_240 = *local_4;
        local_4 = local_4 + 1;
      }
      if (uVar6 == 2) {
        local_240 = local_240 & 0xffff;
      }
      if (uVar6 == 1) {
        local_240 = local_240 & 0xff;
      }
      if ((uVar6 == 4) || (uVar6 == 6)) {
        pbVar5 = (byte *)FUN_02002ac8(local_248,local_244,local_224 + 0x200,local_234,local_230,
                                      local_22c,local_228);
      }
      else {
        pbVar5 = (byte *)FUN_0200291c(local_240,local_224 + 0x200,local_234,local_230,local_22c,
                                      local_228);
      }
      if (pbVar5 == (byte *)0x0) {
switchD_02003666_caseD_42:
        iVar4 = FUN_02004b04(iVar3);
        if ((iVar4 == 0) || (iVar3 = (*param_1)(param_2,iVar3,iVar4), iVar3 != 0)) {
          return local_23c + iVar4;
        }
        return -1;
      }
      local_258 = local_224 + (0x1ff - (int)pbVar5);
      goto LAB_02003a92;
    }
    if ((int)(uVar6 - 100) < 0) {
      if (uVar6 != 99) goto switchD_02003666_caseD_42;
      pbVar5 = local_224;
      local_4 = local_4 + 1;
      local_224[0] = (byte)*puVar8;
      local_258 = (byte *)0x1;
      goto LAB_02003a92;
    }
                    /* WARNING: Switch is manually overridden */
    switch(uVar6 - 100) {
    case 0:
    case 5:
      uVar6 = local_230 & 0xff;
      if (uVar6 == 3) {
        local_240 = *local_4;
        local_4 = local_4 + 1;
      }
      else if (uVar6 == 4) {
        local_248 = *local_4;
        local_244 = local_4[1];
        local_4 = local_4 + 2;
      }
      else if (uVar6 == 6) {
        local_248 = *local_4;
        local_244 = local_4[1];
        local_4 = local_4 + 2;
      }
      else if (uVar6 == 7) {
        local_240 = *local_4;
        local_4 = local_4 + 1;
      }
      else if (uVar6 == 8) {
        local_240 = *local_4;
        local_4 = local_4 + 1;
      }
      else {
        local_240 = *local_4;
        local_4 = local_4 + 1;
      }
      if (uVar6 == 2) {
        local_240 = (uint)(short)local_240;
      }
      if (uVar6 == 1) {
        local_240 = (uint)(char)local_240;
      }
      if ((uVar6 == 4) || (uVar6 == 6)) {
        pbVar5 = (byte *)FUN_02002ac8(local_248,local_244,local_224 + 0x200,local_234,local_230,
                                      local_22c,local_228);
      }
      else {
        pbVar5 = (byte *)FUN_0200291c(local_240,local_224 + 0x200,local_234,local_230,local_22c,
                                      local_228);
      }
      if (pbVar5 == (byte *)0x0) goto switchD_02003666_caseD_42;
      local_258 = local_224 + (0x1ff - (int)pbVar5);
      break;
    case 1:
    case 2:
    case 3:
switchD_02003666_caseD_45:
      if ((char)local_230 == '\t') {
        local_250 = *local_4;
        local_24c = local_4[1];
      }
      else {
        local_250 = *local_4;
        local_24c = local_4[1];
      }
      local_4 = local_4 + 2;
      pbVar5 = (byte *)FUN_020030cc(local_250,local_24c,local_224 + 0x200,local_234,local_230,
                                    local_22c,local_228);
      if (pbVar5 == (byte *)0x0) goto switchD_02003666_caseD_42;
      local_258 = local_224 + (0x1ff - (int)pbVar5);
      break;
    default:
      goto switchD_02003666_caseD_42;
    case 10:
      puVar8 = local_4 + 1;
      piVar9 = (int *)*local_4;
      local_4 = puVar8;
      if ((local_230 & 0xff) < 9) {
                    /* WARNING: Switch is manually overridden */
        switch(local_230 & 0xff) {
        case 0:
          *piVar9 = local_23c;
          break;
        case 2:
          *(short *)piVar9 = (short)local_23c;
          break;
        case 3:
          *piVar9 = local_23c;
          break;
        case 4:
          *piVar9 = local_23c;
          piVar9[1] = local_23c >> 0x1f;
          break;
        case 6:
          *piVar9 = local_23c;
          piVar9[1] = local_23c >> 0x1f;
          break;
        case 7:
          *piVar9 = local_23c;
          break;
        case 8:
          *piVar9 = local_23c;
        }
      }
      goto switchD_020039f2_caseD_1;
    case 0xb:
      goto switchD_0200369a_caseD_6f;
    case 0xf:
      if ((char)local_230 == '\x05') {
        puVar7 = (undefined *)*local_4;
        if (puVar7 == (undefined *)0x0) {
          puVar7 = &DAT_02093398;
        }
        local_4 = local_4 + 1;
        iVar4 = FUN_020023e4(local_224,puVar7,0x200);
        if (iVar4 < 0) goto switchD_02003666_caseD_42;
        pbVar5 = local_224;
      }
      else {
        local_4 = local_4 + 1;
        pbVar5 = (byte *)*puVar8;
      }
      if (pbVar5 == (byte *)0x0) {
        pbVar5 = &DAT_0209339c;
      }
      if (local_234._3_1_ == '\0') {
        if (local_234._2_1_ == '\0') {
          local_258 = (byte *)FUN_02004b04(pbVar5);
        }
        else {
          local_258 = local_228;
          iVar3 = FUN_02002494(pbVar5,0,local_228);
          if (iVar3 != 0) {
            local_258 = (byte *)(iVar3 - (int)pbVar5);
          }
        }
      }
      else {
        local_258 = (byte *)(uint)*pbVar5;
        pbVar5 = pbVar5 + 1;
        if ((local_234._2_1_ != '\0') && ((int)local_228 < (int)local_258)) {
          local_258 = local_228;
        }
      }
    }
LAB_02003a92:
    pbVar10 = local_258;
    if ((local_234 & 0xff) != 0) {
      if ((local_234 & 0xff) == 2) {
        local_237[0] = '0';
      }
      else {
        local_237[0] = ' ';
      }
      bVar2 = *pbVar5;
      if ((((bVar2 == 0x2b) || (bVar2 == 0x2d)) || (bVar2 == 0x20)) && (local_237[0] == '0')) {
        iVar3 = (*param_1)(param_2,pbVar5);
        if (iVar3 == 0) {
          return -1;
        }
        pbVar5 = pbVar5 + 1;
        local_258 = local_258 + -1;
      }
      if ((int)pbVar10 < local_22c) {
        do {
          iVar3 = (*param_1)(param_2,local_237,1);
          if (iVar3 == 0) {
            return -1;
          }
          pbVar10 = pbVar10 + 1;
        } while ((int)pbVar10 < local_22c);
      }
    }
    if ((local_258 != (byte *)0x0) && (iVar3 = (*param_1)(param_2,pbVar5,local_258), iVar3 == 0)) {
      return -1;
    }
    if (((char)local_234 == '\0') && ((int)pbVar10 < local_22c)) {
      do {
        local_238 = 0x20;
        iVar3 = (*param_1)(param_2,&local_238,1);
        if (iVar3 == 0) {
          return -1;
        }
        pbVar10 = pbVar10 + 1;
      } while ((int)pbVar10 < local_22c);
    }
    local_23c = local_23c + (int)pbVar10;
switchD_020039f2_caseD_1:
    cVar1 = *param_3;
  } while( true );
}

