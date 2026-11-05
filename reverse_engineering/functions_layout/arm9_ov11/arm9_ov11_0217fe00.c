
bool FUN_0217fe00(int param_1,uint param_2)

{
  if (param_2 < 8) {
    return (*(uint *)(param_1 + 0x38) & 0xff) <= *(uint *)(&DAT_0218190c + param_2 * 4);
  }
  return true;
}

