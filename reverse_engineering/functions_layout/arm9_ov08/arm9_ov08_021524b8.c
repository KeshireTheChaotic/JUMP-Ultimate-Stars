
/* WARNING: Removing unreachable block (ram,0x0215254a) */

undefined4 FUN_021524b8(void)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined *puVar9;
  undefined4 local_48;
  int local_44;
  undefined1 local_38 [4];
  undefined1 local_34;
  undefined1 local_18;
  
  local_48 = 1;
  FUN_02004b18(&DAT_0216d348,&DAT_0216d530);
  switch(DAT_0216d55c) {
  case 0:
    DAT_0216d368 = 0;
    break;
  case 1:
    if (DAT_0216d560 == 0) {
      local_48 = 0xfffffff9;
    }
    else {
      DAT_0216d36c = DAT_0216d560;
      local_44 = 0;
      puVar9 = &DAT_0216d594;
      puVar7 = &DAT_0216d370;
      do {
        FUN_02002434(local_38,puVar9,0x20);
        local_18 = 0;
        uVar2 = FUN_02004b04(local_38);
        if (uVar2 < 0x11) {
          if (uVar2 < 10) {
            if (uVar2 != 0) {
              if (uVar2 != 5) goto LAB_021525e0;
              DAT_0216d368 = 1;
              *(undefined1 *)puVar7 = local_38[0];
              *(undefined1 *)((int)puVar7 + 1) = local_38[1];
              *(undefined1 *)((int)puVar7 + 2) = local_38[2];
              *(undefined1 *)((int)puVar7 + 3) = local_38[3];
              *(undefined1 *)(puVar7 + 1) = local_34;
            }
          }
          else if (uVar2 == 10) {
            DAT_0216d368 = 1;
            FUN_0215264c(puVar7,local_38,10);
          }
          else if (uVar2 == 0xd) {
            DAT_0216d368 = 2;
            iVar5 = 0xd;
            puVar8 = puVar7;
            puVar6 = local_38;
            do {
              uVar1 = *puVar6;
              puVar6 = puVar6 + 1;
              *(undefined1 *)puVar8 = uVar1;
              puVar8 = (undefined4 *)((int)puVar8 + 1);
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          else {
            if (uVar2 != 0x10) goto LAB_021525e0;
            DAT_0216d368 = 3;
            iVar5 = 0x10;
            puVar8 = puVar7;
            puVar6 = local_38;
            do {
              uVar1 = *puVar6;
              puVar6 = puVar6 + 1;
              *(undefined1 *)puVar8 = uVar1;
              puVar8 = (undefined4 *)((int)puVar8 + 1);
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
        }
        else if (uVar2 < 0x1b) {
          if (uVar2 == 0x1a) {
            DAT_0216d368 = 2;
            FUN_0215264c(puVar7,local_38,0x1a);
          }
          else {
LAB_021525e0:
            local_48 = 0xfffffff9;
          }
        }
        else {
          if (uVar2 != 0x20) goto LAB_021525e0;
          DAT_0216d368 = 3;
          FUN_0215264c(puVar7,local_38,0x20);
        }
        puVar9 = puVar9 + 0x28;
        puVar7 = puVar7 + 8;
        local_44 = local_44 + 1;
      } while (local_44 < 4);
    }
    break;
  case 2:
    DAT_0216d368 = 4;
    puVar8 = &DAT_0216d3f0;
    puVar7 = &DAT_0216d62c;
    iVar5 = 8;
    do {
      uVar3 = *puVar7;
      uVar4 = puVar7[1];
      puVar7 = puVar7 + 2;
      *puVar8 = uVar3;
      puVar8[1] = uVar4;
      puVar8 = puVar8 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    break;
  case 3:
    DAT_0216d368 = 5;
    puVar8 = &DAT_0216d3f0;
    puVar7 = &DAT_0216d62c;
    iVar5 = 8;
    do {
      uVar3 = *puVar7;
      uVar4 = puVar7[1];
      puVar7 = puVar7 + 2;
      *puVar8 = uVar3;
      puVar8[1] = uVar4;
      puVar8 = puVar8 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    break;
  default:
    local_48 = 0xfffffff9;
  }
  return local_48;
}

