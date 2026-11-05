
void FUN_02166fd4(int *param_1,char param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  char *unaff_r4;
  uint unaff_r5;
  
  while( true ) {
    if ((param_4 & param_3 >> 0x10) == 0) {
      *unaff_r4 = param_2;
    }
    else {
      *unaff_r4 = *unaff_r4 + '\x01';
      uVar1 = (ushort)(param_3 >> 0x10);
      if (*unaff_r4 == '(') {
        *(ushort *)(*param_1 + 0x34) = *(ushort *)(*param_1 + 0x34) | uVar1;
      }
      else if (*unaff_r4 == '/') {
        *(ushort *)(*param_1 + 0x34) = *(ushort *)(*param_1 + 0x34) | uVar1;
        *unaff_r4 = '(';
      }
    }
    unaff_r4 = unaff_r4 + 1;
    unaff_r5 = unaff_r5 + 1;
    if (0xd < (int)unaff_r5) break;
    param_3 = (1 << (unaff_r5 & 0xff)) << 0x10;
  }
  return;
}

