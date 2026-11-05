
void FUN_02165330(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *(undefined1 *)(DAT_0216e82c + 0xa90);
  if (*(char *)(DAT_0216e82c + 0xa90) == *(char *)(DAT_0216e82c + 0xa91)) {
    *param_2 = 0;
  }
  else {
    *param_2 = 1;
  }
  *(undefined1 *)(DAT_0216e82c + 0xa91) = *(undefined1 *)(DAT_0216e82c + 0xa90);
  return;
}

