
undefined4 FUN_02067c9c(int param_1,uint param_2,byte *param_3)

{
  if (param_2 < 10) {
                    /* WARNING: Switch is manually overridden */
    switch(param_2) {
    case 2:
      param_1 = param_1 + 0x100;
    case 1:
      param_1 = param_1 + 0x100;
    case 0:
      *param_3 = *(byte *)(param_1 + 0xe6) & 3;
      FUN_02051890(param_1 + 0x80,param_3 + 2,0x50);
      break;
    case 5:
      param_1 = param_1 + 0x100;
    case 4:
      param_1 = param_1 + 0x100;
    case 3:
      *param_3 = 1;
      FUN_02051890(param_1 + 0xd1,param_3 + 2,0x14);
      param_3[0x16] = 0;
      break;
    case 6:
      *param_3 = 2;
      FUN_02069474(param_1 + 0x47c + (uint)*(byte *)(param_1 + 0xd13) * 0xc0,param_3 + 2);
      break;
    case 7:
      *param_3 = 2;
      FUN_020694cc(param_1 + 0x47c + (uint)*(byte *)(param_1 + 0xd13) * 0xc0,param_3 + 2);
    }
  }
  if (*param_3 == 0) {
    return 0;
  }
  return 1;
}

