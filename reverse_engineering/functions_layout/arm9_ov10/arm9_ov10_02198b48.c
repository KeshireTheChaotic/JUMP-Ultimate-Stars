
void FUN_02198b48(uint *param_1,undefined4 param_2)

{
  if (param_1 == (uint *)0x0) {
    *(undefined4 *)(DAT_021aa094 + 0x226c) = 3;
    *(undefined4 *)(DAT_021aa094 + 0x2270) = 0;
    *(undefined4 *)(DAT_021aa094 + 0x2274) = 0;
    *(undefined4 *)(DAT_021aa094 + 0x2278) = 0;
  }
  else {
    *(uint *)(DAT_021aa094 + 0x226c) = *param_1 & 3;
    if (param_1[2] < (4 - (param_1[1] & 3) & 3) + 0xc) {
      *(undefined4 *)(DAT_021aa094 + 0x2270) = 0;
      *(undefined4 *)(DAT_021aa094 + 0x2274) = 0;
    }
    else {
      *(uint *)(DAT_021aa094 + 0x2270) = param_1[1] + 3 & 0xfffffffc;
      *(uint *)(DAT_021aa094 + 0x2274) = param_1[2] - (4 - (param_1[1] & 3) & 3);
      FUN_020517fc(*(undefined4 *)(DAT_021aa094 + 0x2270),0,*(undefined4 *)(DAT_021aa094 + 0x2274));
    }
    *(uint *)(DAT_021aa094 + 0x2278) = param_1[3];
  }
  *(undefined4 *)(DAT_021aa094 + 0x227c) = param_2;
  return;
}

