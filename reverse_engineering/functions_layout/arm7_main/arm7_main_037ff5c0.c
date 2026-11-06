
void FUN_037ff5c0(void)

{
  int iVar1;
  
  FUN_037ff718();
  FUN_038006f0();
  FUN_038023b8();
  FUN_038029c8();
  SND_Enable();
  SND_SetOutputSelector(0,0,0,0);
  SND_SetMasterVolume(0x7f);
  FUN_037ff6c0();
  do {
    iVar1 = FUN_037ff680();
    FUN_03800504();
    FUN_03802d6c();
    FUN_03802318(iVar1 == 1);
    FUN_038001ec(iVar1 == 1);
    FUN_03802758();
    FUN_037ff368();
  } while( true );
}

