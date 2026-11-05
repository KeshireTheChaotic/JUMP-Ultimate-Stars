
int FUN_0200eafc(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 auStack_c8 [4];
  undefined1 auStack_c4 [4];
  undefined1 auStack_c0 [4];
  undefined4 local_bc;
  undefined4 local_b8;
  undefined1 auStack_b4 [4];
  undefined1 auStack_b0 [4];
  undefined4 local_ac;
  undefined4 local_a8;
  int local_a4;
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
  undefined4 local_78 [21];
  
  local_ac = *param_2;
  local_a8 = param_2[1];
  puVar6 = local_78;
  local_a4 = param_2[2];
  local_a0 = param_2[3];
  puVar7 = param_1 + 7;
  local_9c = param_2[4];
  iVar5 = 5;
  local_98 = param_2[5];
  local_94 = *param_1;
  local_90 = param_1[1];
  local_8c = param_1[2];
  local_88 = param_1[3];
  local_84 = param_1[4];
  local_80 = param_1[5];
  local_7c = param_1[6];
  do {
    uVar1 = *puVar7;
    uVar2 = puVar7[1];
    uVar3 = puVar7[2];
    uVar4 = puVar7[3];
    puVar7 = puVar7 + 4;
    *puVar6 = uVar1;
    puVar6[1] = uVar2;
    puVar6[2] = uVar3;
    puVar6[3] = uVar4;
    puVar6 = puVar6 + 4;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *puVar6 = *puVar7;
  uVar1 = FUN_0200dbc4(&local_ac);
  do {
    switch(uVar1) {
    case 0:
      break;
    case 1:
    default:
switchD_0200ebbc_default:
      FUN_0200f280();
      return local_a4;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    case 5:
      break;
    case 6:
      break;
    case 7:
      break;
    case 8:
      break;
    case 9:
      break;
    case 10:
      break;
    case 0xb:
      break;
    case 0xc:
      local_b8 = *(undefined4 *)(local_a4 + 1);
      uVar1 = FUN_0200d9cc(local_a4 + 5,auStack_b4);
      FUN_0200d940(uVar1,auStack_b0);
      iVar5 = FUN_0200f2d0(*param_1,local_b8,param_3);
      if (iVar5 != 0) {
        return local_a4;
      }
      break;
    case 0xd:
      break;
    case 0xe:
      goto switchD_0200ebbc_default;
    case 0xf:
      uVar1 = FUN_0200d9cc(local_a4 + 1,auStack_c8);
      uVar1 = FUN_0200d9cc(uVar1,auStack_c4);
      local_bc = FUN_0200d940(uVar1,auStack_c0);
      iVar5 = FUN_0200e96c(*param_1,auStack_c8);
      if (iVar5 == 0) {
        FUN_0200ea9c(param_1,param_2,auStack_c8,local_a4);
      }
      break;
    case 0x10:
      break;
    case 0x11:
      break;
    case 0x12:
      break;
    case 0x13:
    }
    uVar1 = FUN_0200dbe0(&local_ac);
  } while( true );
}

