
bool FUN_0205587c(uint param_1,int param_2)

{
  return (1 << (param_1 & 0xff) & *(uint *)(&DAT_027fff88 + param_2 * 4)) != 0;
}

