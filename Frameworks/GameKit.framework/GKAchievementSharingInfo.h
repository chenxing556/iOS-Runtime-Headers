/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIImage, GKPlayer, GKAchievement, GKGame, GKAchievementDescription;

@interface GKAchievementSharingInfo : NSObject <NSCoding> {
    GKGame *_game;
    GKPlayer *_player;
    UIImage *_iconImage;
    UIImage *_badgeImage;
    GKAchievement *_achievement;
    GKAchievementDescription *_achievementDescription;
}

@property(retain) GKAchievement * achievement;
@property(retain) GKAchievementDescription * achievementDescription;
@property(retain) GKPlayer * player;
@property(retain) GKGame * game;
@property(retain) UIImage * iconImage;
@property(retain) UIImage * badgeImage;


- (id)initWithAchievement:(id)arg1 forGame:(id)arg2 player:(id)arg3;
- (id)subjectForEmailActivity;
- (id)itemsForActivityType:(id)arg1;
- (id)thumbnailForActivityType:(id)arg1;
- (id)badgeImage;
- (void)setIconImage:(id)arg1;
- (void)setBadgeImage:(id)arg1;
- (id)achievementDescription;
- (void)setAchievementDescription:(id)arg1;
- (void)setAchievement:(id)arg1;
- (id)achievement;
- (void)setPlayer:(id)arg1;
- (id)player;
- (void)setGame:(id)arg1;
- (id)game;
- (void)dealloc;
- (id)iconImage;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
