namespace hellmath {

enum class AccountStatus
{
    troll,
    guest,
    user,
    mod
};

enum class Action
{
    read,
    write,
    remove
};

bool display_post(AccountStatus poster, AccountStatus viewer)
{
   if(poster == AccountStatus::troll)
   {
       return viewer == AccountStatus::troll;
   }

    return true;   
}

bool permission_check(Action action, AccountStatus user)
{
    switch(user)
    {
        case AccountStatus::mod : 
            return true;
        break;

        case AccountStatus::user:
        case AccountStatus::troll:
            return action!=Action::remove;
        break; 

        case AccountStatus::guest:
            return action == Action::read;
        break;

        default : 
            return false;
    }    
}

bool valid_player_combination(AccountStatus user1, AccountStatus user2)
{
   if (user1 == AccountStatus::guest || user2 == AccountStatus::guest) return false;

    return (user1 == AccountStatus::troll) == (user2 == AccountStatus::troll);
}

int get_priority_level(AccountStatus status)
{
    switch(status)
    {
        case AccountStatus::mod : return 4;  
        case AccountStatus::user : return 3;
        case AccountStatus::guest : return 2;
        case AccountStatus::troll : return 1;
        default: return 0; 
     }
}
    
bool has_priority(AccountStatus user1, AccountStatus user2)
{
    return get_priority_level(user1) > get_priority_level(user2); 
}

}  // namespace hellmath
