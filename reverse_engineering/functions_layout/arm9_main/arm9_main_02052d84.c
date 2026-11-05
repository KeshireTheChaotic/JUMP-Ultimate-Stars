
void FUN_02052d84(int *param_1,undefined1 param_2)

{
  if (*param_1 != 0) {
    *(undefined1 *)param_1[1] = param_2;
    *param_1 = *param_1 + -1;
  }
  param_1[1] = param_1[1] + 1;
  return;
}

