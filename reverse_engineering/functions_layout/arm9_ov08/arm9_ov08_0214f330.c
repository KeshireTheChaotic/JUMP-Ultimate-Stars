
int FUN_0214f330(undefined4 *param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint unaff_r6;
  uint uVar4;
  int local_54;
  int local_50;
  undefined4 local_48;
  undefined1 auStack_44 [48];
  
  bVar1 = true;
  bVar2 = false;
  local_54 = -1;
  if (param_1[9] == 0) {
    unaff_r6 = 0x80000;
  }
  else if (param_1[9] == 1) {
    unaff_r6 = 0xc0000;
  }
  FUN_020517fc(&DAT_0216cfcc,0,0x60);
  iVar3 = param_1[10];
  if (iVar3 == 5) {
    DAT_0216cfcc = 1;
  }
  else if (iVar3 == 0xd) {
    DAT_0216cfcc = 2;
  }
  else {
    if (iVar3 != 0x10) {
      return -1;
    }
    DAT_0216cfcc = 3;
  }
  DAT_0216cfcd = 0;
  FUN_02051890(param_1 + 0xb,&DAT_0216cfce,param_1[10]);
  func_0x02199964();
  iVar3 = FUN_0214fc2c(0,param_1 + 1,*param_1,0x30bffe);
  if (iVar3 != 0) {
    local_50 = 0;
    FUN_020550a0(auStack_44);
    FUN_02054ee8(auStack_44,0x3fec42,0,&LAB_0214f88c_1,0x12);
    uVar4 = unaff_r6 | 0x30000;
    do {
      FUN_02053bd8(&DAT_0216cfac,&local_48,1);
      switch(local_48) {
      default:
        bVar1 = false;
        break;
      case 4:
      case 8:
      case 0x13:
        break;
      case 5:
        if (!bVar2) {
          FUN_02054e50(auStack_44);
          iVar3 = FUN_0214fd40(&DAT_0216d040,1);
          if (iVar3 == 1) {
            FUN_0214f8c4(param_1,&DAT_0216d040);
            iVar3 = FUN_0214fa90(&DAT_0216d040,&DAT_0216cfcc,uVar4);
            if (iVar3 == 0) {
              bVar1 = false;
            }
            else {
              bVar2 = true;
            }
          }
          else {
            bVar1 = false;
          }
        }
        break;
      case 10:
        FUN_0214f8c4(param_1,&DAT_0216d040);
        iVar3 = FUN_0214fa90(&DAT_0216d040,&DAT_0216cfcc,uVar4);
        if (iVar3 == 0) {
          bVar1 = false;
        }
        break;
      case 0xc:
        local_54 = 0;
        bVar1 = false;
        break;
      case 0xd:
        local_50 = local_50 + 1;
        if (local_50 < 3) {
          iVar3 = FUN_0214fa90(&DAT_0216d040,&DAT_0216cfcc,uVar4);
          if (iVar3 == 0) {
            bVar1 = false;
          }
        }
        else {
          bVar1 = false;
        }
        break;
      case 0x12:
        if (!bVar2) {
          bVar1 = false;
        }
      }
    } while (bVar1);
    FUN_02054e50(auStack_44);
    do {
      iVar3 = FUN_02053bd8(&DAT_0216cfac,&local_48,0);
    } while (iVar3 == 1);
  }
  FUN_0214f8b4(param_2,&DAT_0216d040,local_54 == 0);
  return local_54;
}

