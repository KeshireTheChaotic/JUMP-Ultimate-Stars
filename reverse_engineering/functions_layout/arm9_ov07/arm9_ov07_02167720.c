
uint FUN_02167720(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  switch(param_1) {
  case 0:
    uVar4 = FUN_02167a60(param_2,0x27);
    break;
  case 1:
    goto code_r0x02167828;
  case 2:
    if ((char)param_2[4] == '\0') {
      iVar3 = FUN_02167a60(param_2,0x29);
      if (iVar3 != 0) {
        *(undefined1 *)(param_2 + 4) = 1;
      }
    }
    else if ((char)param_2[4] == '\x01') {
      iVar3 = FUN_02167a60(param_2,0x2a);
      if (iVar3 != 0) {
        *(undefined1 *)(param_2 + 4) = 0;
      }
      uVar4 = (uint)(iVar3 != 0);
    }
    break;
  case 3:
    goto code_r0x02167828;
  case 4:
    uVar4 = FUN_02167a60(param_2,0x47);
    break;
  case 5:
    uVar4 = FUN_02167a60(param_2,0x2b);
    break;
  case 6:
    goto code_r0x02167828;
  case 7:
    uVar4 = FUN_02167a60(param_2,0x26);
    break;
  case 8:
    goto code_r0x02167828;
  case 9:
    if (*param_2 != 0) {
      func_0x021bac28(*param_2,0x2c,0,0,0,0,0,0,param_4);
    }
    *(undefined1 *)((int)param_2 + 0xe) = 2;
    break;
  case 10:
    if (*param_2 != 0) {
      func_0x021bace0();
    }
    iVar3 = FUN_02167a48(*param_2);
    if (iVar3 != 0) {
      *(undefined1 *)((int)param_2 + 0xe) = 0;
    }
    uVar4 = (uint)(iVar3 != 0);
    break;
  case 0xb:
    cVar1 = *(char *)((int)param_2 + 0xf);
    if (cVar1 < '=') {
      if (';' < cVar1) {
        iVar3 = FUN_02167a60(param_2,0x28);
        if (iVar3 == 0) {
          return 0;
        }
        *(undefined1 *)((int)param_2 + 0xf) = 0;
        return 1;
      }
      if (cVar1 < '\x01') {
        if (cVar1 == '\0') {
          FUN_02167a60(param_2,0x10);
          if (*(char *)((int)param_2 + 0xe) == '\x01') {
            func_0x021bad88(*param_2,1);
            *(char *)((int)param_2 + 0xf) = *(char *)((int)param_2 + 0xf) + '\x01';
            return 0;
          }
          return 0;
        }
      }
      else if (cVar1 == '\x14') {
        FUN_0206dcdc(0);
        iVar3 = Record::RecordSave();
        if (iVar3 == 0) {
          uVar2 = 0x50;
        }
        else {
          FUN_0206dcdc(1);
          uVar2 = 0x32;
        }
        *(undefined1 *)((int)param_2 + 0xf) = uVar2;
        *(undefined1 *)((int)param_2 + 0xe) = 2;
        return 0;
      }
    }
    else if (cVar1 < '[') {
      if (cVar1 == 'Z') {
        FUN_02167a60(param_2,0x11);
        if (*(char *)((int)param_2 + 0xe) == '\x01') {
          *(char *)((int)param_2 + 0xf) = *(char *)((int)param_2 + 0xf) + '\x01';
          return 0;
        }
        return 0;
      }
    }
    else if (cVar1 == 'n') {
      FUN_0206dd40();
      return 0;
    }
    *(char *)((int)param_2 + 0xf) = *(char *)((int)param_2 + 0xf) + '\x01';
    break;
  case 0xc:
    uVar4 = FUN_02167a60(param_2,0x2d);
    break;
  case 0xd:
    *(undefined1 *)((int)param_2 + 0xb) = 1;
    break;
  case 0xe:
    uVar4 = FUN_02167a60(param_2,0x2e);
    break;
  case 0xf:
code_r0x02167828:
    uVar4 = (uint)(*param_2 == 0);
    if (*param_2 != 0) {
      uVar4 = func_0x021bacfc();
    }
    break;
  case 0x10:
    if (*param_2 != 0) {
      func_0x021bac28(*param_2,0x2f,0,0,0,0,0,0,param_4);
    }
    *(undefined1 *)((int)param_2 + 0xe) = 2;
    break;
  case 0x11:
    iVar3 = FUN_02167a60(param_2,0x30);
    if (iVar3 != 0) {
      *(undefined1 *)(param_2 + 3) = 1;
    }
  }
  return uVar4;
}

